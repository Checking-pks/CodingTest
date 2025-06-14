#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K, result = 0;
    cin >> N >> K;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    for (int i = 0, j = N - 1; i < j; i++, j--)
    {
        while (i < j && nList[i] + nList[j] > K)
            j--;
        
        if (nList[i] + nList[j] <= K)
            result++;
    }
    
    cout << result;
}
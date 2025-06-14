#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, result = 1;
    cin >> N;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    for (int i = 1, stack = 1; i < N; i++)
    {
        if (nList[i] == nList[i - 1])
            stack++;
        else
            stack = 1;
        
        result = max(result, stack);
    }
    
    cout << result;
}
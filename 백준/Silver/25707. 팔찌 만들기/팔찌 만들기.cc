#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, result = 0;
    cin >> N;
    
    vector<int> nList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    sort(nList.begin(), nList.end());
    
    result = nList.back() - nList.front();
    for (int i = 1; i < N; i++)
        result += nList[i] - nList[i - 1];
    
    cout << result;
}
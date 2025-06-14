#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, result = 0;
    cin >> N;
    
    vector<int> nList(N), maxList(N);
    for (int i = 0; i < N; i++)
        cin >> nList[i];
    
    maxList = nList;
    result = nList[0];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1, last = 100001; j < N; j++)
        {
            if (nList[j] <= nList[i]) continue;
            if (nList[j] >= last) continue;
            
            last = nList[j];
            
            maxList[j] = max(maxList[j], nList[j] + maxList[i]);
            result = max(result, maxList[j]);
        }
    }
    
    cout << result;
}
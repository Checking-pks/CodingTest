#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    
    cin >> N;
    vector<int> nList(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> nList[i];
    
    nList.push_back(2020);
    
    cin >> M;
    for (int i = 0, now; i < M; i++)
    {
        cin >> now;
        
        if (nList[now + 1] - nList[now] > 1)
            nList[now]++;
    }
    
    for (int i = 1; i <= N; i++)
        cout << nList[i] << "\n";
}
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int N, M;
map<int, queue<int>> line;
vector<int> result;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N >> M;
    
    result.resize(N);
    
    for (int i = 0, count; i < N; i++)
    {
        cin >> count;
        for (int j = 0, now; j < count; j++)
        {
            cin >> now;
            line[now].push(i);
        }
    }
    
    for (int i = 0, now; i < M; i++)
    {
        cin >> now;
        
        if (line[now].empty()) continue;
        
        result[line[now].front()]++;
        line[now].pop();
    }
    
    for (int i = 0; i < N; i++)
        cout << result[i] << " ";
}
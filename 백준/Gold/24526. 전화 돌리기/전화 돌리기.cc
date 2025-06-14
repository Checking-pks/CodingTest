#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int N, M, result = 0;
vector<unordered_set<int>> node;
unordered_set<int> loopMembers;
vector<int> state;

bool dfs(int idx)
{
    if (loopMembers.find(idx) != loopMembers.end())
        return true;
    
    if (state[idx] == 1)
    {
        loopMembers.insert(idx);
        return true;
    }
    
    if (state[idx] == 2) 
        return loopMembers.find(idx) != loopMembers.end();
    
    state[idx] = 1;
    
    bool isLoop = false;
    
    for (int next : node[idx])
    {
        if (dfs(next))
        {
            isLoop = true;
            loopMembers.insert(idx);
            break;
        }
    }
    
    state[idx] = 2;
    return isLoop;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> N >> M;
    
    node = vector<unordered_set<int>> (N + 1);
    state = vector<int> (N + 1);

    for (int i = 0, s, e; i < M; i++)
    {
        cin >> s >> e;
        node[s].insert(e);
    }
    
    for (int i = 1; i <= N; i++)
    {
        dfs(i);
        result += loopMembers.find(i) == loopMembers.end();
    }
    
    cout << result;
}
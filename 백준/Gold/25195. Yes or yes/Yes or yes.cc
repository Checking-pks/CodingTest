#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int N;
vector<vector<int>> lines;
unordered_set<int> fan;

void input()
{
    int M, S;
    
    cin >> N >> M;
    lines.resize(N + 1);
    
    for (int i = 0, s, e; i < M; i++)
    {
        cin >> s >> e;
        lines[s].push_back(e);
    }
    
    cin >> S;
    
    for (int i = 0, now; i < S; i++)
    {
        cin >> now;
        fan.insert(now);
    }
}

bool simulate(int idx)
{
    if (fan.find(idx) != fan.end()) return false;
    if (lines[idx].empty()) return true;
    
    bool result = false;
    
    for (int i = 0; i < lines[idx].size(); i++)
        result |= simulate(lines[idx][i]);
    
    return result;
}

int main()
{
    input();
    cout << (simulate(1) ? "yes" : "Yes");
}
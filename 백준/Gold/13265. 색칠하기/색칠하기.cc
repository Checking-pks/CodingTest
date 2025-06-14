#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> nList;
vector<int> colors;

bool coloring(int idx)
{
    for (int i = 0; i < nList[idx].size(); i++)
    {
        int now = nList[idx][i];
        
        if (colors[idx] == colors[now])
            return false;
        else if (colors[now])
            continue;
        
        colors[now] = colors[idx] % 2 + 1;
        
        bool result = coloring(now);
        
        if (!result)
            return false;
    }
    
    return true;
}

bool simulate()
{
    int n, m;
    cin >> n >> m;
    
    nList = vector<vector<int>>(n + 1);
    for (int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        
        nList[a].push_back(b);
        nList[b].push_back(a);
    }
    
    colors = vector<int>(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (colors[i]) continue;
        colors[i] = 1;
        
        bool result = coloring(i);
        
        if (!result) return false;
    }
    
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        cout << (simulate() ? "possible\n" : "impossible\n");
}
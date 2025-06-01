#include <iostream>
#include <vector>

using namespace std;

vector<int> group;

int findGroup(int x)
{
    return group[x] = (x == group[x] ? x : findGroup(group[x]));
}

void unionGroup(int x, int y)
{
    x = findGroup(x);
    y = findGroup(y);
    
    if (x != y)
        group[x] = y;
}

int main()
{
    int V, E;
    cin >> V >> E;
    
    vector<int> nodeCount(V + 1);
    
    group.resize(V + 1);
    for (int i = 1; i <= V; i++)
        group[i] = i;
    
    for (int i = 0, a, b; i < E; i++)
    {
        cin >> a >> b;
        nodeCount[a]++;
        nodeCount[b]++;
        
        unionGroup(a, b);
    }
    
    int odd = 0;
    group[0] = group[1];
    for (int i = 1; i <= V; i++)
    {
        if (findGroup(i) != findGroup(i - 1))
        {
            cout << "NO";
            return 0;
        }
        
        odd += nodeCount[i] & 1;
    }
    
    cout << (odd > 2 ? "NO" : "YES");
}
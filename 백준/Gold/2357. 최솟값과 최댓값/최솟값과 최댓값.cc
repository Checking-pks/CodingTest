#include <iostream>
#include <vector>

using namespace std;

vector<int> nList;
vector<pair<int, int>> segTree(400000);

void init(int n, int s, int e)
{
    if (s == e)
    {
        segTree[n] = {nList[s], nList[s]};
        return;
    }
    
    int m = (s + e) / 2;
    
    init(n * 2, s, m);
    init(n * 2 + 1, m + 1, e);
    
    segTree[n] = {
        min(segTree[n * 2].first, segTree[n * 2 + 1].first), 
        max(segTree[n * 2].second, segTree[n * 2 + 1].second)
    };
}

pair<int, int> find(int n, int s, int e, int l, int r)
{
    if (r < s || e < l)
        return {1000000001, 0};
    
    if (l <= s && e <= r)
        return segTree[n];
    
    int m = (s + e) / 2;
    
    pair<int, int> lc = find(n * 2, s, m, l, r);
    pair<int, int> rc = find(n * 2 + 1, m + 1, e, l, r);
    
    return {min(lc.first, rc.first), max(lc.second, rc.second)};
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    nList = vector<int>(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> nList[i];
    
    init(1, 1, N);
    
    for (int i = 0, s, e; i < M; i++)
    {
        cin >> s >> e;
        pair<int, int> now = find(1, 1, N, s, e);
        cout << now.first << " " << now.second << "\n";
    }
}
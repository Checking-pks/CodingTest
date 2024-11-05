#include <iostream>
#include <unordered_set>

using namespace std;

void solve()
{
    int N, M;
    unordered_set<int> nList;
    
    cin >> N;
    for (int i = 0, now; i < N; i++)
    {
        cin >> now;
        nList.insert(now);
    }
    
    cin >> M;
    for (int i = 0, now; i < M; i++)
    {
        cin >> now;
        cout << (nList.find(now) != nList.end()) << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--)
        solve();
}
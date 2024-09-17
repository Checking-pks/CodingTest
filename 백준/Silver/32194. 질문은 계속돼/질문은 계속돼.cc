#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> nList(N + 2);
    nList[1] = 1;
    for (int i=2, t, x, y; i<=N + 1; i++) {
        cin >> t >> x >> y;
        
        bool now = (nList[y] - nList[x - 1]) == (t == 1 ? y - x + 1 : 0);
        
        nList[i] = now + nList[i - 1];
        
        cout << (now ? "Yes\n" : "No\n");
    }
}
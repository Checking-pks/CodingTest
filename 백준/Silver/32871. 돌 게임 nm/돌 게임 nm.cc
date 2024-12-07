#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll T;
    cin >> T;
    
    while (T--)
    {
        ll n, m;
        cin >> n >> m;
        
        if (n == 1 || m == 1)
        {
            cout << "YES\n";
            continue;
        }
        
        cout << ((n & 1) ^ (m & 1) ? "YES\n" : "NO\n");
    }
}
#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll T, n, m;
    cin >> T;
    
    while (T--)
    {
        cin >> n >> m;
        
        if (n > 1 && m > 1)
            cout << ((n & 1) ^ (m & 1) ? "YES\n" : "NO\n");
        else
            cout << "YES\n";
    }
}
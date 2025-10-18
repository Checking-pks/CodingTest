#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll S, X;
    cin >> S >> X;
    
    ll D = S - X;
    if (D < 0 || D % 2)
    {
        cout << 0;
        return 0;
    }
    
    D /= 2;
    if (D & X)
    {
        cout << 0;
        return 0;
    }
    
    int count = 0;
    for (ll i = 1; i <= X; i <<= 1)
        if (X & i) count++;
    
    ll ans = 1LL << count;
    
    if (D == 0) ans -= 2;
    
    cout << ans;
}
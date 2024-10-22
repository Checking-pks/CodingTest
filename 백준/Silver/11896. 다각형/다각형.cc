#include <iostream>

using namespace std;

typedef long long ll;

ll sum(ll n) {
    if (n < 4) return 0;
    
    n >>= 1;
    return n * (n + 1) - 2;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    
    cout << sum(b) - sum(a - 1);
}
#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned long long ll;

int main()
{
    ll n;
    cin >> n;
    
    ll r = (ll)sqrt(n);
    
    cout << r + (r * r < n);
}
#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1
        >> x2 >> y2 >> r2;
    
    ll dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    ll len = (r1 + r2) * (r1 + r2);
    
    cout << (dist < len ? "YES" : "NO");
}
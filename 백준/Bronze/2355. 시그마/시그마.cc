#include <iostream>

using namespace std;

typedef long long ll;

ll sum(ll n)
{
    return abs(n) * (abs(n) + 1) / 2 * (n < 0 ? -1 : 1);
}

int main()
{
    ll A, B;
    cin >> A >> B;
    
    if (A == B)
    {
        cout << A;
        return 0;
    }
    
    if (abs(A) < abs(B))
        swap(A, B);
    
    if (A < 0 != B < 0)
        B = -B;
    else
        B += (B < 0 ? 1 : -1);
    
    cout << sum(A) - sum(B);
}
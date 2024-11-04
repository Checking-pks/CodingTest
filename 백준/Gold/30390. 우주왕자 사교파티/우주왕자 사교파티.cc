#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    
    ll S = A + B;
    ll result = 1;
    
    for (ll i = 1, x, y; i * i <= S; i++)
    {
        if (S % i) continue;
        
        x = i, y = S / i;
        
        if (A % x <= K || B % x <= K) result = max(result, x);
        if (A % y <= K || B % y <= K) result = max(result, y);
    }
    
    cout << result;
}
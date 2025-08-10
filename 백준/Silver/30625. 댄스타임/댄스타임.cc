#include <iostream>

using namespace std;

typedef long long ll;
#define DIV 1000000007

ll N, M;

ll getValue(ll a)
{
    ll res = 1;
    
    for (int i = 0; i < a; i++)
    {
        res *= (M - 1);
        res %= DIV;
    }
    
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    ll diff = 0, same = 0;
    for (ll i = 0, a, b; i < N; i++)
    {
        cin >> a >> b;
        
        if (b) diff++;
        else same++;
    }
    
    ll result = getValue(diff);
    
    if (same)
    {
        ll wrong = getValue(diff + 1);
        for (int i = 0; i < same; i++)
        {
            result += wrong;
            result %= DIV;
        }
    }
    
    if (diff)
    {
        ll wrong = getValue(diff - 1);
        for (int i = 0; i < diff; i++)
        {
            result += wrong;
            result %= DIV;
        }
    }
    
    cout << result;
}
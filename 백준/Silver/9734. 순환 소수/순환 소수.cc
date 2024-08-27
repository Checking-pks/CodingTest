#include <iostream>

using namespace std;

typedef long long ll;

ll GCD(ll a, ll b) 
{
    if (!b) return a;
    return GCD(b, a % b);
}

void getNum(ll &u, ll &d, string s)
{
    bool isDot = false, isCycle = false;
    ll _u = 0, _d = 1;
    
   for (char c : s)
    {
        switch (c)
        {
            case '(':
                isCycle = true;
            case '.':
                isDot = true;
            case ')':
                break;
            default:
                u = u * 10 + (c - '0');
                if (isDot) d = d * 10;
                
                if (!isCycle)
                {
                    _u = u;
                    _d = d;
                }
                break;
        }
    }
    
    u -= _u;
    d -= _d;
}

int main()
{
    string s;
    
    while (cin >> s)
    {
        ll u = 0, d = 1;
        
        getNum(u, d, s);
        
        ll gcd = GCD(u, d);
        
        u /= gcd;
        d /= gcd;
        
        cout << s << " = " << u << " / " << d << "\n";
    }
}
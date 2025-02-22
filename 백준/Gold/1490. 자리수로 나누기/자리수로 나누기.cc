#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    string N;
    cin >> N;
    
    ll d = 1;
    for (char c : N)
    {
        if (c == '0') continue;
        d *= (c - '0') / gcd(c - '0', d);
    }
    
    queue<string> nList;
    nList.push(N);
    
    while (stoll(nList.front()) % d)
    {
        for (char c = '0'; c <= '9'; c++)
            nList.push(nList.front() + c);
        
        nList.pop();
    }
    
    cout << nList.front();
}
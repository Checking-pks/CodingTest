#include <iostream>

using namespace std;

typedef long long ll;

const ll DIV = 1e+9 + 7;

int main()
{
    ll N;
    cin >> N;
    
    pair<ll, ll> nList = {0, 1};
    
    if (N < 3)
    {
        cout << (N == 1 ? nList.first : nList.second);
        return 0;
    }
    
    for (ll i = 2; i < N; i++)
    {
        nList = {
            nList.second,
            (nList.second + nList.first * 2) % DIV
        };
    }
    
    cout << nList.second;
}
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<vector<ll>> d = {{1, 1, -1}, {-2, 1, 0}, {2, 0, 1}};

int main()
{
    ll n;
    cin >> n;
    
    vector<ll> result = {1, 0, 0};
    
    for (ll i = 0; i < n; i++)
    {
        vector<ll> now = {0, 0, 0};
        for (ll a = 0; a < 3; a++)
            for (ll b = 0; b < 3; b++)
                now[b] += result[a] * d[a][b];
        
        result = now;
    }
    
    cout << result[0] + result[1] + result[2];
}
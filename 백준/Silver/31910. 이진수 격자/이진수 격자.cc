#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<vector<ll>> field, result;

int main()
{
    ll N;
    cin >> N;
    
    field = result = vector<vector<ll>>(N + 2, vector<ll>(N + 2));
    for (ll i=1; i<=N; i++)
        for (ll j=1; j<=N; j++)
            cin >> field[i][j];
    
    for (ll i=N; i>=1; i--) {
        for (ll j=N; j>=1; j--) {
            ll dist = 2 * N - i - j;
            
            result[i][j] = field[i][j] * (1ll << dist);
            result[i][j] += max(result[i+1][j], result[i][j+1]);
        }
    }
    
    cout << result[1][1];
}
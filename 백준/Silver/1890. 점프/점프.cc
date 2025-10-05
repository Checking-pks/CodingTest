#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    
    vector<vector<ll>> field(N, vector<ll>(N)), count;
    count = field;
    
    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++)
            cin >> field[i][j];
    
    count[0][0] = 1;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j < N; j++)
        {
            if (!field[i][j]) continue;
            
            if (i + field[i][j] < N) count[i + field[i][j]][j] += count[i][j];
            if (j + field[i][j] < N) count[i][j + field[i][j]] += count[i][j];
        }
    }
    
    cout << count[N - 1][N - 1];
}
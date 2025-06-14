#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

void simulate()
{
    ll M, K, D, A, result = 0;
    
    cin >> M;
    
    vector<vector<ll>> mission(M, vector<ll>(3));
    
    for (ll i = 0, nowKM, nowDM, nowAM; i < M; i++)
    {
        cin >> mission[i][0]
            >> mission[i][1]
            >> mission[i][2];
    }
    
    cin >> K >> D >> A;
    
    for (ll i = 0, now; i < M; i++)
    {
        now = mission[i][0] * K
            - mission[i][1] * D
            + mission[i][2] * A;
        
        result += (now > 0 ? now : 0);
    }
    
    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll N;
    cin >> N;
    
    while (N--)
        simulate();
}
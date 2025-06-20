#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll N, K;
vector<vector<ll>> nList, dp;

ll getMod(const std::string& S, ll X) {
    ll mod = 0;
    for (char c : S)
        mod = (mod * 10 + (c - '0')) % X;
    return mod;
}

void input()
{
    cin >> N;
    
    vector<string> sList(N);
    for (ll i = 0; i < N; i++)
        cin >> sList[i];
    
    cin >> K;
    
    nList.resize(N);
    for (ll i = 0; i < N; i++)
    {
        ll nowMod = getMod(sList[i], K);
        ll nowLen = sList[i].length();
        string nowLenTen = '1' + string(nowLen, '0');
        
        nList[i] = {nowMod, getMod(nowLenTen, K)};
    }
}

ll gcd(ll A, ll B)
{
    return (B ? gcd(B, A % B) : A);
}

void solve()
{
    ll maxState = 1 << N, maxCase = 1;
    dp.resize(maxState, vector<ll>(K, 0));
    
    dp[0][0] = 1;
    
    for (int state = 0; state < (1 << N); state++) {
        for (int mod = 0; mod < K; mod++) {
            if (dp[state][mod] == 0) continue;
    
            for (int i = 0; i < N; i++) {
                if (state & (1 << i)) continue;
    
                int nextState = state | (1 << i);
                int nextMod = (mod * nList[i][1] + nList[i][0]) % K;
    
                dp[nextState][nextMod] += dp[state][mod];
            }
        }
    }
    
    for (int i = 2; i <= N; i++)
        maxCase *= i;
    
    ll g = gcd(maxCase, dp[maxState - 1][0]);
    
    cout << dp[maxState - 1][0] / g << "/" << maxCase / g;
}

int main()
{
    input();
    solve();
}
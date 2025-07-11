#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

ll N;
vector<pll> spot;

ll cross(pll A, pll B, pll P)
{
    return (B.first - A.first) * (P.second - A.second) - 
        (B.second - A.second) * (P.first - A.first);
}

void input()
{
    cin >> N;
    spot.resize(N);
    for (ll i = 0; i < N; i++)
        cin >> spot[i].first >> spot[i].second;
}

void calc()
{
    ll k = 0;

    sort(spot.begin(), spot.end());
    vector<pll> H(2 * N);

    for (ll i = 0; i < N; i++) {
        while (k >= 2 && cross(H[k - 2], H[k - 1], spot[i]) <= 0) k--;
        H[k++] = spot[i];
    }

    for (ll i = N - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && cross(H[k - 2], H[k - 1], spot[i]) <= 0) k--;
        H[k++] = spot[i];
    }

    cout << k - 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    input();
    calc();
}
#include <iostream>
#include <tuple>

using namespace std;

typedef long long ll;

pair<ll, pair<ll, ll>> xGCD(ll a, ll b) {    // it returns {g, {x,y}}, ax+by=g
    if(!b) return {a, {1, 0}};
    pair<ll, pair<ll, ll>> ret = xGCD(b, a%b);
    
    ll g, x, y;
    g = ret.first;
    tie(x, y) = ret.second;
    return {g, {y, x - (a / b) * y}};   
}

ll mod_inverse(ll a, ll mod) {
    auto res = xGCD(a,mod);
    if(res.first > 1) return -1;
    return (res.second.first + mod) % mod;
}

int main()
{
	ll N, A;
	cin >> N >> A;
	cout << (N - A) << " " << mod_inverse(A, N);
}
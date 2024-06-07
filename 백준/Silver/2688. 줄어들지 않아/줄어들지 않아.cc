#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

map<pair<ll, ll>, ll> mList;

ll solve(ll n, ll d) {
	if (d == 0) return 1;
	
	if (mList.find({n, d}) != mList.end())
		return mList[{n, d}];

	mList[{n, d}] = 0;
	for (ll i=n; i<=9; i++)
		mList[{n, d}] += solve(i, d-1);

	return mList[{n, d}];
}

int main() {
	ll T;
	cin >> T;

	while (T--) {
		ll n;
		cin >> n;
		cout << solve(0, n) << "\n";
	}
}
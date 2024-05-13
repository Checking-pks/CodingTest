#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll T;
	cin >> T;

	while (T--) {
		ll n, x, result = 0;
		cin >> n >> x;

		map<ll, ll> nList;
		for (ll i=0, now; i<n; i++) {
			cin >> now;
			nList[now]++;
		}

		if (!x) 
			for (auto a : nList) 
				result += a.second * (a.second - 1) / 2;
		else {
			for (auto a : nList) 
				result += a.second * nList[a.first ^ x];
			result >>= 1;
		}

		cout << result << "\n";
	}
}
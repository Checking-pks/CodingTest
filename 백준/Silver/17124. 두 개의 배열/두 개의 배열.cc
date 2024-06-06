#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll T;
	cin >> T;

	while (T--) {
		ll n, m, result = 0;
		cin >> n >> m;

		vector<ll> nList(n), mList(m);

		for (ll i=0; i<n; i++)
			cin >> nList[i];
		for (ll i=0; i<m; i++)
			cin >> mList[i];

		mList.push_back(-1'000'000'001);
		mList.push_back(1'000'000'001);
		sort(mList.begin(), mList.end());

		for (ll i=0; i<n; i++) {
			ll now = nList[i];
			
			auto idx = lower_bound(
						mList.begin(), 
						mList.end(),
						now);

			ll left = *(idx - 1), right = *idx;

			if (abs(left - now) <= abs(right - now))
				result += left;
			else
				result += right;
		}

		cout << result << "\n";
	}
}
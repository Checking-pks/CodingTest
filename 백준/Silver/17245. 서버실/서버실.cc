#include <iostream>
#include <map>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
	ll N, now, total = 0;
	cin >> N;

	vector<pair<ll, ll>> nList;
	map<ll, ll> mList;

	for (ll i = 0; i < N; i++) {
		for (ll j = 0; j < N; j++) {
			cin >> now;
			mList[now]++;
		}
	}

	for (auto m : mList) {
		nList.push_back(m);
		total += m.first * m.second;
	}

	ll l = 0, r = 10000000, m;
	while (l <= r) {
		now = 0;
		m = (l + r) / 2;

		for (ll i = 0; i < nList.size(); i++)
			now += min(nList[i].first, m) * nList[i].second;

		if (total <= now * 2)
			r = m - 1;
		else
			l = m + 1;
	}

	cout << l;
}
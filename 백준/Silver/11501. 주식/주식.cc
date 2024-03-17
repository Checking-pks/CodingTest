#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

ll solve() {
	ll N, result = 0;
	cin >> N;
	
	vector<ll> nList(N);
	vector<pair<ll, ll>> valueList(N);

	for (ll i=0; i<N; i++) {
		cin >> nList[i];
		valueList[i] = {nList[i], i};
	}

	sort(valueList.begin(), valueList.end(), greater<>());

	for (ll i=0; i<N; i++) {
		ll nowIdx = valueList[i].second;
		ll nowValue = valueList[i].first;

		if (nList[nowIdx] == 0) continue;

		for (ll j=nowIdx; j>=0; j--) {
			if (nList[j] == 0) break;
			result += nowValue - nList[j];
			nList[j] = 0;
		}
	}

	return result;
}

int main() {
	ll T;
	cin >> T;

	while (T--) 
		cout << solve() << "\n";
}
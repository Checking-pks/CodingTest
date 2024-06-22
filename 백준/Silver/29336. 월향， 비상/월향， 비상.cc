#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll N, M, T, Q, sum = 0;
	cin >> N >> M;

	vector<ll> nList(N);
	for (ll i=0; i<N; i++)
		cin >> nList[i];

	sort(nList.begin(), nList.end());
	
	while (M--) {
		cin >> T >> Q;

		while (sum < Q && nList.size()) {
			sum += nList.back() + T;
			nList.pop_back();
		}

		if (sum < Q) {
			cout << -1;
			return 0;
		}
	}

	for (ll n : nList)
		sum += n + T;

	cout << sum;
}
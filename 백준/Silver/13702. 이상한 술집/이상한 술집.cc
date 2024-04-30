#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	int N, K;
	cin >> N >> K;

	vector<ll> nList(N);
	ll l = 0, r = 0, m;

	for (int i=0; i<N; i++) {
		cin >> nList[i];
		r = max(r, nList[i]);
	}

	while (l <= r) {
		int now = 0;
		m = (l + r) / 2;

		for (int i=0; m && i<N; i++) {
			now += nList[i] / m;
		}

		if (!m || now >= K)
			l = m + 1;
		else
			r = m - 1;
	}

	cout << r;
}
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll n, k;
	cin >> n >> k;

	vector<ll> nList(n);
	for (ll i=0; i<n; i++)
		cin >> nList[i];

	if (n == 1) {
		cout << 0;
		return 0;
	}

	ll left = 0, right = 1'000'000'001, mid;
	while (left <= right) {
		mid = (left + right) / 2;

		ll now = 
			(abs(nList[0] - nList[1]) > mid) +
			(abs(nList[n-1] - nList[n-2]) > mid);

		for (ll i=1; i<n-1; i++) {
			now += 
				(abs(nList[i] - nList[i-1]) > mid) ||
				(abs(nList[i] - nList[i+1]) > mid);
		}

		if (now > k)
			left = mid + 1;
		else
			right = mid - 1;
	}

	cout << left;
}
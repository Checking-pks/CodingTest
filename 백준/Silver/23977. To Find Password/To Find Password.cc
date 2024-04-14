#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
	if (!b) return a;
	return gcd(b, a % b);
}

int main() {
	ll K, N, result = 1;
	cin >> K >> N;

	for (ll i=0, now; i<N; i++) {
		cin >> now;
		result *= now / gcd(result, now);
	}

	cout << result - K;
}
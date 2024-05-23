#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll N, a, b;
	cin >> N;

	ll result = 0, sum = 0;
	vector<ll> nList(N);
	for (ll i=0; i<N; i++) {
		cin >> nList[i];
		sum += nList[i];
	}

	cin >> a >> b;

	if (a < 0) {
		ll t = -(a / N) + 1;
		a += t * N;
		b += t * N;
	}

	if ((b - a) / N) {
		ll t = (b - a) / N;
		b -= t * N;
		result += t * sum;
	}

	for (ll i=a; i<b; i++)
		result += nList[i % N];
	
	cout << result;
}
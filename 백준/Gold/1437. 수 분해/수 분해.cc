#include <iostream>

using namespace std;

typedef long long ll;

const ll DIVISION = 10'007;

ll solve(ll N) {
	if (!N) return 0;
	ll result = 1;

	while (N >= 3) {
		if (N == 4) break;
		
		result *= 3;
		result %= DIVISION;
		N -= 3;
	}
	
	while (N >= 2) {
		result *= 2;
		result %= DIVISION;
		N -= 2;
	}

	return result;
}

int main() {
	ll N;
	cin >> N;
	cout << solve(N);
}
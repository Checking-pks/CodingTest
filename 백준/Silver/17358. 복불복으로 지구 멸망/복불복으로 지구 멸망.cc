#include <iostream>

using namespace std;

typedef long long ll;

ll DIVISION = 1'000'000'007;

ll counting(ll N) {
	if (N < 3) return 1;
	return ((N - 1) * counting(N - 2)) % DIVISION;
}

int main() {
	ll N;
	cin >> N;
	cout << counting(N + (N & 1));
}
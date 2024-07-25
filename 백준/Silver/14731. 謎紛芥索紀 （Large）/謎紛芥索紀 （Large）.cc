#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

ll DIVISION = 1'000'000'007;

map<ll, ll> squareList = {{0, 1}, {1, 2}};

ll calc(ll K) {
	if (squareList.find(K) != squareList.end())
		return squareList[K];

	squareList[K] = calc(K / 2) * calc(K / 2 + (K & 1));
	squareList[K] %= DIVISION;
	
	return squareList[K];
}

int main() {
	ll N, result = 0;
	cin >> N;

	for (ll i = 0, C, K; i < N; i++) {
		cin >> C >> K;

		if (C == 0 || K == 0)
			continue;

		C *= K;
		C %= DIVISION;
		C *= calc(K - 1);
		C %= DIVISION;

		result += C;
		result %= DIVISION;
	}

	cout << result;
}
#include <iostream>

using namespace std;

typedef long long ll;

pair<ll, ll> result = {0, 0};

void check(ll D, ll N, ll M, ll K) {
	if (K < 0) return;

	ll nowCount = N / D + M / D + K / D;

	if (result.first < nowCount)
		result = {nowCount, K};
	else if (result.first == nowCount)
		result.second = max(result.second, K);
}

int main() {
	ll D, N, M, K;
	cin >> D >> N >> M >> K;

	ll moreN = (D - (N % D)), moreM = (D - (M % D));
	
	check(D, N, M, K);
	check(D, N + moreN, M, K - moreN);
	check(D, N, M + moreM, K - moreM);
	check(D, N + moreN, M + moreM, K - moreN - moreM);

	cout << result.second;
}
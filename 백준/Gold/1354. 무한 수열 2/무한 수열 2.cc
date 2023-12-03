#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> numList;
long long N, P, Q, X, Y;

long long dp(long long n) {
	if (n<=0) return 1;
	if (numList.find(n) != numList.end()) return numList[n];
	long long now = dp(n/P-X) + dp(n/Q-Y);
	numList[n] = now;
	return now;
}

int main() {
	cin >> N >> P >> Q >> X >> Y;
	cout << dp(N);
}
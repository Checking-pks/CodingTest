#include <iostream>

using namespace std;

int dp(int n, int k) {
	if (k == 1) return 1;
	if (n == k) return 1;
	return dp(n-1, k-1) + dp(n-1, k);
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << dp(n, k);
}
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> dp(1'000'001, -1);

bool f(int x) {
	if (dp[x] > -1)
		return dp[x];

	int y = sqrt(x);
	if (y * y == x)
		return dp[x] = 1;

	for (int i = 1; i * i <= x; i++)
		if (!f(x - i * i))
			return dp[x] = 1;

	return dp[x] = 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int T, N;
	cin >> T;

	while (T--) {
		cin >> N;
		cout << (f(N) ? "koosaga\n" : "cubelover\n");
	}
}
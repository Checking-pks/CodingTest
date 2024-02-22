#include <iostream>

using namespace std;

int main() {
	long long n, m, result=2'100'000'000;
	cin >> n >> m;

	for (long long i=0; i<m; i++) {
		long long u, d;
		cin >> u >> d;

		long long left=1, right=n;

		while (left <= right) {
			long long mid = (left+right) / 2;
			long long now = mid * u - (n-mid) * d;

			if (now > 0) {
				right = mid - 1;
				result = min(result, now);
			}
			else left = mid + 1;
		}
	}

	cout << result;
}
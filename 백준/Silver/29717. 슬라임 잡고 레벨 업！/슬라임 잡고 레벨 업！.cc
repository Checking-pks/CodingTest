#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		long long N;
		cin >> N;
		
		long long totalEXP = N*(N+1)/2;

		long long l=1, r=1'000'000'000, m, sum;
		while (l <= r) {
			m = (l + r) / 2;
			sum = 2*m * (2*m + 2) / 4;

			if (totalEXP < sum)
				r = m - 1;
			else
				l = m + 1;
		}
		
		cout << l << "\n";
	}
}
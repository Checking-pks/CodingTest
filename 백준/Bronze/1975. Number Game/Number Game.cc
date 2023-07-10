#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num, result = 0;
		cin >> num;

		for (int i=2; i<=num; i++) {
			int nowNum = num;

			while (!(nowNum % i)) {
				result++;
				nowNum /= i;
			}
		}

		cout << result << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num, max;
		cin >> num;
		max = num;

		while (num > 1) {
			if (num & 1) {
				num = num * 3 + 1;
			} else {
				num >>= 1;	
			}

			if (max < num) max = num;
		}

		cout << max << "\n";
	}
}
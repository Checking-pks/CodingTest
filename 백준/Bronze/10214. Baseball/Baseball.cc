#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int result = 0;

		for (int i=0, y, k; i<9; i++) {
			cin >> y >> k;

			result += y;
			result -= k;
		}

		if (result > 0) cout << "Yonsei\n";
		else if (result < 0) cout << "Korea\n";
		else cout << "Draw\n";
	}
}
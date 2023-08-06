#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, m;
		cin >> n >> m;
		cout << 2 * m - n << " " << n - m << "\n";
	}
}
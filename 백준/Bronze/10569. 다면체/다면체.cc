#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int v, e;
		cin >> v >> e;

		cout << 2 - v + e << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int d;
		cin >> d;

		for (int i=d; i>=0; i--) {
			if (i*i+i <= d) {
				cout << i << "\n";
				break;
			}
		}
	}
}
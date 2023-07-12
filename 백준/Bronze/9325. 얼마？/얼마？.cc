#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int result, option;
		cin >> result >> option;

		for (int i=0, count, price; i<option; i++) {
			cin >> count >> price;
			result += count * price;
		}

		cout << result << "\n";
	}
}
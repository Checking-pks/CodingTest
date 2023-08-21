#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num;
		cin >> num;

		for (int i=10; i<=num; i*=10) {
			if (num % i >= i / 2) num += i;
			num -= num % i;
		}

		cout << num << "\n";
	}
}
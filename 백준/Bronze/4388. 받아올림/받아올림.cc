#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	while (a + b) {
		int carry = 0, time = 0;

		while (a + b) {
			carry += a%10 + b%10;
			a /= 10;
			b /= 10;
			carry /= 10;

			if (carry) time++;
		}

		cout << time << "\n";
		cin >> a >> b;
	}
}
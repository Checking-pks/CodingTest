#include <iostream>

using namespace std;

int main() {
	int n, a = 0, b = 0;
	cin >> n;

	while (n--) {
		int aScore, bScore;
		cin >> aScore >> bScore;

		a += (aScore > bScore);
		b += (aScore < bScore);
	}

	cout << a << " " << b;
}
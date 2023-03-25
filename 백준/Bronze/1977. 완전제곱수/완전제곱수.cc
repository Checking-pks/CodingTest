#include <iostream>

using namespace std;

int main() {
	int sum = 0, min = 0;
	int range_min, range_max;

	cin >> range_min >> range_max;

	for (int i=100, square; i>=1; i--) {
		square = i * i;

		if (range_min <= square && square <= range_max) {
			sum += square;
			min = square;
		}
	}

	if (sum)
		cout << sum << "\n" << min;
	else
		cout << -1;
}
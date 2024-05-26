#include <iostream>

using namespace std;

bool solve(int x, int y) {
	while (x | y) {
		if (x % 3 == 2 || y % 3 == 2)
			return false;
		if (x % 3 == y % 3)
			return false;

		x /= 3;
		y /= 3;
	}

	return true;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << solve(x, y);
}
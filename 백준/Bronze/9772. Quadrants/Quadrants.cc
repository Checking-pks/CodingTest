#include <iostream>

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;

	while (x || y) {
		if (x == 0 || y == 0) cout << "AXIS\n";
		else if (x > 0 && y > 0) cout << "Q1\n";
		else if (x < 0 && y > 0) cout << "Q2\n";
		else if (x < 0 && y < 0) cout << "Q3\n";
		else if (x > 0 && y < 0) cout << "Q4\n";

		cin >> x >> y;
	}

	cout << "AXIS";
}
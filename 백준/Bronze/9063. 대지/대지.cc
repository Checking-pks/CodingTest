#include <iostream>

using namespace std;

int main() {
	int xMin = 10001, xMax = -10001, yMin = 10001, yMax = -10001;

	int num;
	cin >> num;

	for (int i=0, x, y; i<num; i++) {
		cin >> x >> y;

		xMin = min(xMin, x);
		xMax = max(xMax, x);
		yMin = min(yMin, y);
		yMax = max(yMax, y);
	}

	cout << (xMax - xMin) * (yMax - yMin);
}

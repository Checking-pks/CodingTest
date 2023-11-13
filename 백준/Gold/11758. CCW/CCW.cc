#include <iostream>

using namespace std;

struct pt {double x, y;};

int main() {
	pt p1, p2, p3;
	cin >> p1.x >> p1.y
		>> p2.x >> p2.y
		>> p3.x >> p3.y;

	double comp = (p2.y - p1.y) * (p3.x - p2.x) - (p3.y - p2.y) * (p2.x - p1.x);

	if (comp > 0) cout << -1;
	else if (comp < 0) cout << 1;
	else cout << 0;
}
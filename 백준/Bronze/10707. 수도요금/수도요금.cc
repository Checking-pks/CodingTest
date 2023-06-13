#include <iostream>

using namespace std;

int main() {
	int x, yB, yL, yA, u;
	cin >> x >> yB >> yL >> yA >> u;
	cout << min(x * u, yB + (u > yL) * (u - yL) * yA);
}
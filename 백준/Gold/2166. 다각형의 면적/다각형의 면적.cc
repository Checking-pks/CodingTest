#include <iostream>
#include <cmath>
using namespace std;

struct pos{
	double x;
	double y;
};

double getCross(pos p1, pos p2) {
    return p1.x * p2.y - p1.y * p2.x;
}

int main() {
	cout << fixed;
	cout.precision(1);
	
	int n;
	cin >> n;

	pos firstPos, p1, p2;
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	firstPos = p1;

	double result = getCross(p1, p2);

	for (int i=2; i<n; i++) {
		p1 = p2;
		cin >> p2.x >> p2.y;

		result += getCross(p1, p2);
	}
	result += getCross(p2, firstPos);
	
	cout << 0.5 * abs(result);
}
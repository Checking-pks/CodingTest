#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

int main() {
	cout.precision(3);
	cout << fixed;
	
	double x1, x2, y1, y2, r1, r2, t1, t2;
	double dist, result;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	if (r1 + r2 <= dist)
		result = 0;
	else if (fabs(r1 - r2) >= dist)
		result = PI * fmin(r1 * r1, r2 * r2);
	else {
		t1 = acos(
				(dist * dist + r1 * r1 - r2 * r2) 
				/ (dist * r1 * 2.0)) * 2.0;
		t2 = acos(
				(dist * dist + r2 * r2 - r1 * r1) 
				/ (dist * r2 * 2.0)) * 2.0;

		result = (t1 * r1 * r1 
					+ t2 * r2 * r2 
					- r1 * r1 * sin(t1) 
					- r2 * r2 * sin(t2)) 
				* 0.5;
	}

	cout << result;
}
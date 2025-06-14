#include <iostream>
#include <cmath>

using namespace std;

void orthogonalToPolar() {
	double x, y;
	cin >> x >> y;

	double r = sqrt(x*x + y*y);
	double theta = atan2(y, x);
	if (theta < 0)
		theta += 2 * M_PI;

	cout << r << " " << theta << "\n";
}

void polarToOrthogonal() {
	double r, theta;
	cin >> r >> theta;

	double x = r * cos(theta);
	double y = r * sin(theta);

	cout << x << " " << y << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cout << fixed;
	cout.precision(8);
	
	int T;
	cin >> T;

	while (T--) {
		int type;
		cin >> type;

		if (type == 1)
			orthogonalToPolar();
		else
			polarToOrthogonal();
	}
}
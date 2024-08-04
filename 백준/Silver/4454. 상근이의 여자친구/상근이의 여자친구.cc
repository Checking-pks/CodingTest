#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	double a, b, c, d, m, t;

	while (cin >> a >> b >> c >> d >> m >> t) {
		double left = 0, right = 2'100'000'000, mid;

		while (left <= right) {
			mid = (left + right) * .5;

			double now = a * mid * mid * mid +
						 b * mid * mid +
						 c * mid +
						 d;

			if (now * m < t)
				left = mid + .00001;
			else
				right = mid - .00001;
		}

		cout << right - .005 << "\n";
	}
}
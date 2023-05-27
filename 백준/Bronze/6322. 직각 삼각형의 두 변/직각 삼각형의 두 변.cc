#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(3);
	
	double a, b, c;
	cin >> a >> b >> c;

	for (int i=1; a != 0 && b != 0 && c != 0; i++) {
		cout << "Triangle #" << i <<"\n";

		if (a == -1) {
			a = c * c - b * b;

			if (a <= 0) cout << "Impossible.";
			else cout << "a = " << sqrt(a);
		}

		if (b == -1) {
			b = c * c - a * a;

			if (b <= 0) cout << "Impossible.";
			else cout << "b = " << sqrt(b);
		}

		if (c == -1) {
			c = a * a + b * b;

			if (c <= 0) cout << "Impossible.";
			else cout << "c = " << sqrt(c);
		}

		cout << "\n\n";
		cin >> a >> b >> c;
	}
}
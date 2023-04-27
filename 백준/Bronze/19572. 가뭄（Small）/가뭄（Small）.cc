#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	float a = (d1+d2-d3)/2.f;
	float b = (d1+d3-d2)/2.f;
	float c = (d2+d3-d1)/2.f;

	if (a > 0 && b > 0 && c > 0) {
		cout << 1 << "\n";
		cout << a << " " << b << " " << c;
	} else {
		cout << -1;
	}
}
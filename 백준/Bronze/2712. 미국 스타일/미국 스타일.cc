#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(4);
	
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		double n;
		string unit;
		cin >> n >> unit;

		if (unit == "kg") cout << n * 2.2046 << " " << "lb\n";
		if (unit == "lb") cout << n * 0.4536 << " " << "kg\n";
		if (unit == "l") cout << n * 0.2642 << " " << "g\n";
		if (unit == "g") cout << n * 3.7854 << " " << "l\n";
	}
}
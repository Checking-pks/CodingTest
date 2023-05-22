#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	double b = 350.34, v = 230.9, h = 190.55, a = 125.3, l = 180.9;
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int A, B, C, D, E;
		cin >> A >> B >> C >> D >> E;
		cout << "$" << A * b + B * v + C * h + D * a + E * l << "\n";
	}
}
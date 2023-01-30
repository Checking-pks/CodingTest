#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);
	
	double r;
	cin >> r;

	cout << M_PI * 2 * sqrt(r/M_PI);
}
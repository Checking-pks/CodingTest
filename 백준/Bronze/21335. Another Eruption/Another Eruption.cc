#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);
	
	double s;
	cin >> s;
	cout << sqrt(s / M_PI) * 2 * M_PI;
}
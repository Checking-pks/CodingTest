#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);
	
	double x, y, z;
	cin >> x >> y >> z;

	cout << 2 * x * 0.229 * 0.324 + 
		2 * y * 0.297 * 0.420 + 
		z * 0.210 * 0.297;
}
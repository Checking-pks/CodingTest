#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	double m;
	cin >> a >> b;
	
	m = 1.0 * (b - a) / 400;

	cout << 1.0 / (1 + pow(10, m));
}
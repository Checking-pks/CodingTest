#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);

	int r, c;
	cin >> r >> c;

	cout << r+c-sqrt(r*r+c*c);
}
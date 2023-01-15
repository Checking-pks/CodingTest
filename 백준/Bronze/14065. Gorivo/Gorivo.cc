#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);

	double val;
	cin >> val;
	cout << 3.785411784 / 1609.344 / val * 100000;
}
#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	double s;
	
	cin >> a >> b >> c >> d;

	s = 0.5 * a / b * c / d;

	cout << (s == long(s));
}
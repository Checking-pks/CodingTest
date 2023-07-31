#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);
	
	double o, a, p, oNeed, aNeed, pNeed;
	cin >> o >> a >> p;
	cin >> oNeed >> aNeed >> pNeed;

	double c = min(o/oNeed, min(a/aNeed, p/pNeed));

	cout << o - oNeed * c << " " << a - aNeed * c << " " << p - pNeed * c;
}
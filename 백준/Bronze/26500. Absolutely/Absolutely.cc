#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	
    int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		double a, b;
		cin >> a >> b;
		cout << abs(a - b) << "\n";
	}
}
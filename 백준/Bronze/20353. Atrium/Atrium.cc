#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);
	
	long long num;
	cin >> num;

	double meter = sqrt(num);

	cout << 4 * meter;
}
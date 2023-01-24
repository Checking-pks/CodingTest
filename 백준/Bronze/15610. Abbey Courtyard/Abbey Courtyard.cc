#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(8);
	
	long long n;
	cin >> n;
	cout << 4 * sqrt(n);
}
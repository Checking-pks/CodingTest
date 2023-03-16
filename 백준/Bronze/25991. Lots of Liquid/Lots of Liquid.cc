#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(7);
	
	double result = 0;
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		double liquid;
		cin >> liquid;
		result += pow(liquid, 3);
	}

	cout << cbrt(result);
}
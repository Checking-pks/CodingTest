#include <iostream>

using namespace std;

int main() {
	cout.precision(3);
	cout << fixed;
	
	int n;
	double result, last;
	cin >> n >> last;

	result = last;
	for (int i=1; i<n; i++) {
		double now;
		cin >> now;
		last = max(now, now*last);
		result = max(result, last);
	}

	cout << result;
}
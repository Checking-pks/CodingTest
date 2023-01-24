#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	int n;
	cin >> n;

	for (int i=0, s; i<n; i++) cin >> s;

	cout << (n ? "1.00" : "divide by zero");
}
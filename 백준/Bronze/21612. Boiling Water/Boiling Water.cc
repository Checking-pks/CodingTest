#include <iostream>

using namespace std;

int main() {
	int c, f;
	cin >> c;

	f = 5 * c - 400;
	
	cout << f << "\n";

	if (f < 100) 	cout << 1;
	if (f == 100)	cout << 0;
	if (f > 100)	cout << -1;
}
#include <iostream>

using namespace std;

int main() {
	cout.precision(1);
	cout << fixed;
	
	double M;
	cin >> M;

	if (M <= 30) cout << M * 0.5;
	else cout << (M - 30) * 1.5 + 15;
}
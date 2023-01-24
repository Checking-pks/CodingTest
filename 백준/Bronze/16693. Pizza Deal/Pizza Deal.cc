#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int s, p1, r, p2;
	cin >> s >> p1 >> r >> p2;

	cout << ((1.0 * s / p1 > 1.0 * r * r * M_PI / p2) ? 
		"Slice of pizza" : "Whole pizza");
}
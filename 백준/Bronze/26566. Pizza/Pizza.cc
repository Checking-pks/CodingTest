#include <iostream>

using namespace std;

int main() {
	const double pi = 3.14159265358979323846264338327;
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		double a1, p1, r1, p2;
		cin >> a1 >> p1 >> r1 >> p2;
		cout << (a1/p1 > pi * r1 * r1 / p2 ? "Slice of pizza" : "Whole pizza") << "\n";
	}
}
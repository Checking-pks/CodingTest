#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, a, b, c, d;
	int p1, p2;
	cin >> n >> a >> b >> c >> d;

	p1 = ceil(1.0 * n / a) * b;
	p2 = ceil(1.0 * n / c) * d;

	cout << (p1 < p2 ? p1 : p2);
}
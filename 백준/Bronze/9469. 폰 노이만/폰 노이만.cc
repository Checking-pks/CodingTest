#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		float n, d, a, b, f;
		cin >> n >> d >> a >> b >> f;

		cout << n << " " << d / (a + b) * f << "\n";
	}
}
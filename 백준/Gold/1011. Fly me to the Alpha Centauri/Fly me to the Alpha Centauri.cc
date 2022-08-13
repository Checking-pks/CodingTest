#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double testcase, x, y;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		cin >> x >> y;

		cout << int(sqrt(4 * (y - x) - 3)) << "\n";

	}
}

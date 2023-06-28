#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		double x[2], y[2], r[2], d, rl, rs;
		cin >> x[0] >> y[0] >> r[0] >> x[1] >> y[1] >> r[1];

		d = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));

		if (r[0] > r[1]) {
			rl = r[0];
			rs = r[1];
		}
		else {
			rl = r[1];
			rs = r[0];
		}
		
		if (d == 0 && rl == rs) {
			cout << "-1\n";
		}
		else if (rl + rs < d) {
			cout << "0\n";
		}
		else if (rl + rs == d) {
			cout << "1\n";
		}
		else if ((rl - rs < d) && (rl + rs > d)) {
			cout << "2\n";
		}
		else if (rl - rs == d) {
			cout << "1\n";
		}
		else if (rl - rs > d) {
			cout << "0\n";
		}

	}
}
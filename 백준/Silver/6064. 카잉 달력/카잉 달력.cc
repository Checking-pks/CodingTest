#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int M, N, x, y, quotient = 0;
		cin >> M >> N >> x >> y;

		while (true) {
			int nowNum = quotient++ * M + x;
			
			if ((nowNum - 1) % N + 1 == y) {
				cout << nowNum << "\n";
				break;
			}

			if (quotient != 1 && (x - 1) % N == (nowNum - 1) % N) {
				cout << "-1\n";
				break;
			}
		}
	}
}
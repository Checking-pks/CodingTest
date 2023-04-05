#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int r, e, c;
		cin >> r >> e >> c;

		int profit = e - c - r;
		if (profit > 0)
			cout << "advertise\n";
		else if (profit < 0)
			cout << "do not advertise\n";
		else
			cout << "does not matter\n";
	}
}
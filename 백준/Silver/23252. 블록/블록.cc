#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int a, b, c;
		cin >> a >> b >> c;

		b = (b & 1);

		if (a && b && c) {
			a--; b--; c--;
		}

		int count = min(a, c);
		a -= count;
		c -= count;

		if (a == 0 && c == 0)
			cout << (b ? "No\n" : "Yes\n");
		else if (a == 0)
			cout << "No\n";
		else if (c == 0)
			cout << ((a + b * 2) % 2 ? "No\n" : "Yes\n");
	}
}
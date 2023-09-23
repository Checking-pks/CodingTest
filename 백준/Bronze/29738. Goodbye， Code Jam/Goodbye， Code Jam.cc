#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1, now; i<=testcase; i++) {
		cin >> now;

		cout << "Case #" << i << ": ";

		if (now > 4500) cout << "Round 1\n";
		else if (now > 1000) cout << "Round 2\n";
		else if (now > 25) cout << "Round 3\n";
		else cout << "World Finals\n";
	}
}
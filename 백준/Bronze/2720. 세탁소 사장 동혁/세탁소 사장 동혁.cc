#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int change;
		cin >> change;

		cout << change/25;
		change %= 25;
		cout << " " << change/10;
		change %= 10;
		cout << " " << change/5;
		change %= 5;
		cout << " " << change << "\n";
	}
}
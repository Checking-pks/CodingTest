#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int strongest = 0;
		char team;
		int sNum, bNum;
		cin >> sNum >> bNum;

		for (int i=0, power; i<sNum; i++) {
			cin >> power;

			if (strongest < power) {
				strongest = power;
				team = 'S';
			}
		}

		for (int i=0, power; i<bNum; i++) {
			cin >> power;

			if (strongest < power) {
				strongest = power;
				team = 'B';
			}
		}

		cout << team << "\n";
	}
}
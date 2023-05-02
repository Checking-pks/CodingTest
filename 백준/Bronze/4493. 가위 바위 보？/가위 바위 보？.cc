#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int time, p1 = 0, p2 = 0;
		cin >> time;

		while (time--) {
			char p1c, p2c;
			cin >> p1c >> p2c;

			switch(p1c) {
				case 'R':
					if (p2c == 'S') p1++;
					if (p2c == 'P') p2++;
					break;
				case 'P':
					if (p2c == 'R') p1++;
					if (p2c == 'S') p2++;
					break;
				case 'S':
					if (p2c == 'P') p1++;
					if (p2c == 'R') p2++;
					break;
			}
		}

		if (p1 > p2) cout << "Player 1\n";
		else if (p1 < p2) cout << "Player 2\n";
		else cout << "TIE\n";
	}
}
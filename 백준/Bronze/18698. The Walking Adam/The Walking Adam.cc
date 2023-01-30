#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int move = 0;
		string step;
		cin >> step;

		for (char s:step) {
			if (s == 'U') move++;
			else break;
		}

		cout << move << "\n";
	}
}
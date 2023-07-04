#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	cin.ignore();

	while (testcase--) {
		int score = 0;
		string str;
		getline(cin, str);

		for (int i=0; i<str.length(); i++) {
			if (str[i] == ' ') continue;

			score += str[i] - 'A' + 1; 
		}

		if (score == 100)
			cout << "PERFECT LIFE\n";
		else
			cout << score << "\n";
	}
}
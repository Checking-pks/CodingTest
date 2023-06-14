#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	cin.ignore();

	while (testcase--) {
		string str;
		getline(cin, str);

		cout << "god";

		for (int i=str.find(' '); i<str.length(); i++) {
			if (str[i] != ' ')
				cout << str[i];
		}

		cout << "\n";
	}
}
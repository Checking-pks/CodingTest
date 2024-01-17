#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	cin.ignore();

	while (testcase--) {
		string s;
		getline(cin, s);

		int stack=0, maximum=0;
		for (int i=0; i<s.length(); i++) {
			if (s[i] == '[')
				stack++;
			else
				stack--;

			maximum = max(maximum, stack);
		}

		cout << (1 << maximum) << "\n";
	}
}
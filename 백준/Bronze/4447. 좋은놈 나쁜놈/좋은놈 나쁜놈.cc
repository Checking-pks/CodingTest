#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	cin.ignore();

	while (num--) {
		int result = 0;
		string str;
		getline(cin, str);

		for (char c:str) {
			result += (c == 'g' || c == 'G');
			result -= (c == 'b' || c == 'B');
		}

		cout << str << " is ";

		if (result > 0) cout << "GOOD\n";
		else if (result == 0) cout << "NEUTRAL\n";
		else cout << "A BADDY\n";
	}
}
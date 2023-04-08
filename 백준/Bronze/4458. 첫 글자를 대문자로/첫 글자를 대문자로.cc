#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	cin.ignore();

	while (num--) {
		string str;
		getline(cin, str);

		str[0] = toupper(str[0]);

		cout << str << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	string str;
	cin >> str;

	if (num <= 25)
		cout << str;
	else if (num > 25) {
		string s = str.substr(11, num-22);
		int dotPos = s.find('.');

		if (dotPos < s.length()-1) {
			cout << str.substr(0, 9) + "......" + str.substr(num-10);
		} else {
			cout << str.substr(0, 11) + "..." + str.substr(num-11);
		}
	}
}
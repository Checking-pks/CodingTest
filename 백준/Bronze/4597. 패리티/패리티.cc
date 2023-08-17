#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	while (str != "#") {
		int oneNum = 0;

		for (int i=0; i<str.length(); i++)
			oneNum += str[i] == '1';

		str.back() = '0'
			+ (str.back() == 'e' && (oneNum & 1))
			+ (str.back() == 'o' && !(oneNum & 1));

		cout << str << "\n";
		cin >> str;
	}
}
#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	int one = 0, zero = 0;

	for (int i=0; i<str.length(); i++) {
		one += str[i] == '1';
		zero += str[i] == '0';
	}

	one >>= 1;
	zero >>= 1;

	for (int i=0; i<str.length(); i++) {
		if (one && str[i] == '1') {
			one--;
			str[i] = ' ';
		}

		if (zero && str[str.length()-i-1] == '0') {
			zero--;
			str[str.length()-i-1] = ' ';
		}
	}

	for (int i=0; i<str.length(); i++) {
		if (str[i] != ' ') cout << str[i];
	}
}
#include <iostream>
#include <cmath>

using namespace std;

int charToInt(char c) {
	switch (c) {
		case '-':
			return 0;
		case '\\':
			return 1;
		case '(':
			return 2;
		case '@':
			return 3;
		case '?':
			return 4;
		case '>':
			return 5;
		case '&':
			return 6;
		case '%':
			return 7;
		case '/':
			return -1;
	}
}

int main() {
	string str;
	cin >> str;

	while (str != "#") {
		int num = 0;
		
		for (int i=0; i<str.length(); i++) 
			num += charToInt(str[i]) * pow(8, str.length() - i - 1);

		cout << num << "\n";
		cin >> str;
	}
}
#include <iostream>

using namespace std;

int main() {
	string str, result = "";
	getline(cin, str);

	for (int i=0; i<str.length(); i++) {
		switch(str[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				i += 2;
			default:
				result += str[i];
				break;
		}
	}

	cout << result;
}
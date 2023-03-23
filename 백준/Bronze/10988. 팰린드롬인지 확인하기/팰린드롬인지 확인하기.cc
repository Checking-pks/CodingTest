#include <iostream>

using namespace std;

int main() {
	bool isPalindrome = true;
	string str;
	cin >> str;

	for (int i=0; i<str.length(); i++) {
		if (str[i] != str[str.length() - i - 1]) {
			isPalindrome = false;
			break;
		}
	}

	cout << isPalindrome;
}
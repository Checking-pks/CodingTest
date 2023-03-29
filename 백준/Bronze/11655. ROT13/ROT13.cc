#include <iostream>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	for (int i=0; i<str.length(); i++) {
		if ('a'<=str[i] && str[i]<='z') str[i] = 'a' + ((str[i] - 'a' + 13) % 26);
		if ('A'<=str[i] && str[i]<='Z') str[i] = 'A' + ((str[i] - 'A' + 13) % 26);
	}

	cout << str;
}
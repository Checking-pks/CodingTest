#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	if (s[0] != '\"' || s.back() != '\"') {
		s = "CE";
	} else {
		s = s.substr(1, s.length()-2);
		if (!s.length()) s = "CE";
	}

	cout << s;
}
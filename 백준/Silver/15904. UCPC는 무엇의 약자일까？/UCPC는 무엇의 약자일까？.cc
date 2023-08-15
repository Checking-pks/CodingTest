#include <iostream>

using namespace std;

int main() {
	int pos = 0;
	string str, ucpc="UCPC";
	getline(cin, str);

	for (int i=0; i<str.length(); i++) {
		if (ucpc[pos] == str[i]) pos++;
		if (pos > 3) break;
	}

	cout << "I " << (pos > 3 ? "love" : "hate") << " UCPC";
}
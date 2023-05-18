#include <iostream>

using namespace std;

string str;

void replace(char a, char b) {
	for (int i=0; i<str.length(); i++) 
		if (str[i] == a)
			str[i] = b;
}

int main() {
	cin >> str;

	if (str.find('A') != str.npos) {
		replace('B', 'A');
		replace('C', 'A');
		replace('D', 'A');
		replace('F', 'A');
	} else if (str.find('B') != str.npos) {
		replace('C', 'B');
		replace('D', 'B');
		replace('F', 'B');
	} else if (str.find('C') != str.npos) {
		replace('D', 'C');
		replace('F', 'C');
	} else {
		for (int i=0; i<str.length(); i++) {
			str[i] = 'A';
		}
	}
	
	cout << str;
}
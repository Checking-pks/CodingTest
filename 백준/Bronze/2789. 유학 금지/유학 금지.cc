#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	for (char c:str) {
		switch (c) {
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'G':
			case 'I':
			case 'M':
			case 'R':
				break;
			default:
				cout << c;
		}
	}
}
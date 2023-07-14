#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int pos;
		string str;
		cin >> pos >> str;
		cout << str.substr(0, pos-1) << str.substr(pos) << "\n";
	}
}
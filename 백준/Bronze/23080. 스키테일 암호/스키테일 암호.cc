#include <iostream>

using namespace std;

int main() {
	int thickness;
	string str;
	cin >> thickness >> str;

	for (int i=0; i<str.length(); i+=thickness) {
		cout << str[i];
	}
}
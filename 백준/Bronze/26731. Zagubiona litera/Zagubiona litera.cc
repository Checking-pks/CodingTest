#include <iostream>

using namespace std;

int main() {
	int result = 325;
	string str;

	cin >> str;

	for (char c:str)
		result -= c - 'A';

	cout << char('A' + result);
}
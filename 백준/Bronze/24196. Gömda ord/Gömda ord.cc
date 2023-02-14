#include <iostream>

using namespace std;

int main() {
	string str, result = "";
	cin >> str;

	for (int i=0; i<str.length(); i += str[i] - 'A' + 1) 
		result += str[i];

	cout << result;
}
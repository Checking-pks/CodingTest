#include <iostream>

using namespace std;

int main() {
	int result = 1;
	string str;
	cin >> str;

	for (int i=0; i<str.length()-1; i++) {
		result += str[i] >= str[i+1];
	}

	cout << result;
}
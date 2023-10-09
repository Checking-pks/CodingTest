#include <iostream>

using namespace std;

int main() {
	int length, result=0;
	string s1, s2;
	cin >> length;
	cin >> s1 >> s2;

	for (int i=0; i<length; i++) {
		result += s1[i] != s2[i];
	}

	cout << result;
}
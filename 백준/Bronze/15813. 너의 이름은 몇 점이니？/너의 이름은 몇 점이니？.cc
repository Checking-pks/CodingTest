#include <iostream>

using namespace std;

int main() {
	int length, score = 0;
	string str;
	cin >> length >> str;

	for (int i=0; i<str.length(); i++) {
		score += str[i] - 'A' +1;
	}

	cout << score;
}
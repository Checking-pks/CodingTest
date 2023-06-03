#include <iostream>

using namespace std;

int main() {
	int alphabet[26] = {0, }, result = 0;
	string str1, str2;
	
	cin >> str1 >> str2;

	for (char c:str1) alphabet[c - 'a']++;
	for (char c:str2) alphabet[c - 'a']--;

	for (int n:alphabet) {
		if (n < 0) result -= n;
		if (n > 0) result += n;
	}

	cout << result;
}
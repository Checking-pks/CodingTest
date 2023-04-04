#include <iostream>
#include <string>

using namespace std;

int main() {
	string plainText, encryptionKey;
	
	getline(cin, plainText);
	cin >> encryptionKey;

	for (int i=0; i<plainText.length(); i++) {
		if (!('a' <= plainText[i] && plainText[i] <= 'z')) {
			cout << plainText[i];
			continue;
		}

		int n = (plainText[i] - 'a') - (encryptionKey[i%encryptionKey.length()] - 'a') - 1;

		if (n < 0) n += 26;

		cout << char(n + 'a');
	}
}
#include <iostream>

using namespace std;

int main() {
	int alphabet[26] = {0,};
	int max = 0;

	string str;
	while (getline(cin, str)) {
		for (char c:str) {
			if ('a' <= c && c <= 'z') {
				int idx = c - 'a';
				alphabet[idx]++;

				if (max < alphabet[idx])
					max = alphabet[idx];
			}
		}
	}

	for (int i=0; i<26; i++) 
		if (max == alphabet[i])
			cout << char('a' + i);
}
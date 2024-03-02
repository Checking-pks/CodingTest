#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int alphabet[26] = {0,};
	string s;
	cin >> s;

	for (char c:s) 
		alphabet[c-'a']++;

	for (int i=0; i<26; i++) {
		if (alphabet[i] == 0) {
			cout << s << char(i+'a');
			return 0;
		}
	}

	string next = s;
	next_permutation(next.begin(), next.end());

	if (s[0] != next[0]) {
		cout << -1;
		return 0;
	}

	for (int i=0; i<s.length(); i++) {
		if (next[i] != s[i]) {
			cout << next.substr(0, i+1);
			break;
		}
	}
}
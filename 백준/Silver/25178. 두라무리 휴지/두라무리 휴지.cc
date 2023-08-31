#include <iostream>
#include <vector>

using namespace std;

int main() {
	int length;
	string s1, s2;
	cin >> length >> s1 >> s2;

	bool result = true;

	// case 1
	vector<int> alphabet(26, 0);
	for (int i=0; i<length; i++) {
		alphabet[s1[i] - 'a']++;
		alphabet[s2[i] - 'a']--;
	}

	for (int i=0; i<alphabet.size(); i++) {
		if (alphabet[i] != 0) {
			result = false;
			break;
		}
	}

	// case 2
	if (s1.front() != s2.front()) result = false;
	if (s1.back() != s2.back()) result = false;

	// case 3
	string newS1 = "", newS2 = "";
	
	for (int i=0; i<length; i++) {
		switch(s1[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				newS1 += s1[i];
		}

		switch(s2[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				newS2 += s2[i];
		}
	}

	if (newS1 != newS2) result = false;
	
	cout << (result ? "YES" : "NO");
}
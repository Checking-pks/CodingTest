#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i=s.length()/2; i<s.length(); i++) {
		bool evenPalindrome = true;
		bool oddPalindrome  = true;

		for (int a=i, b=i-1; a<s.length(); a++, b--) {
			if (s[a] != s[b]) {
				evenPalindrome = false;
				break;
			}
		}

		for (int a=i+1, b=i-1; a<s.length(); a++, b--) {
			if (s[a] != s[b]) {
				oddPalindrome = false;
				break;
			}
		}

		if (evenPalindrome) {
			cout << i*2;
			break;
		}

		if (oddPalindrome) {
			cout << i*2+1;
			break;
		}
	}
}
#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	for (int i=0; i<s1.length(); i++) {
		if (s1[i] == '1' && s2[i] == '1')
			cout << '1';
		else
			cout << '0';
	}
	
	cout << "\n";

	for (int i=0; i<s1.length(); i++) {
		if (s1[i] == '0' && s2[i] == '0')
			cout << '0';
		else
			cout << '1';
	}

	cout << "\n";

	for (int i=0; i<s1.length(); i++) {
		if (s1[i] == s2[i])
			cout << '0';
		else
			cout << '1';
	}

	cout << "\n";

	for (int i=0; i<s1.length(); i++) {
		if (s1[i] == '0')
			cout << '1';
		else
			cout << '0';
	}
	
	cout << "\n";

	for (int i=0; i<s2.length(); i++) {
		if (s2[i] == '0')
			cout << '1';
		else
			cout << '0';
	}
}
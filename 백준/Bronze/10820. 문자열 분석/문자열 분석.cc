#include <iostream>

using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		int small=0, big=0, num=0, space=0;

		for (int i=0; i<s.length(); i++) {
			if (s[i] == ' ') space++;
			else if ('0' <= s[i] && s[i] <= '9') num++;
			else if ('A' <= s[i] && s[i] <= 'Z') big++;
			else small++;
		}

		cout << small << " " << big << " " << num << " " << space << "\n";
	}
}
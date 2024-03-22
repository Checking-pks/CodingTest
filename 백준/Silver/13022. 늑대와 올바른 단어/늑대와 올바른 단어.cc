#include <iostream>

using namespace std;

int main() {
	string s, wolf = "wolf";
	cin >> s;

	int pos = s.find('w');
	while (pos != string::npos) {
		int count[4] = {0,};
		for (int i=pos, cPos=0; cPos<4; i++) {
			if (s[i] == wolf[cPos])
				count[cPos]++;
			else {
				cPos++;
				i--;
			}
		}

		if (count[0] == count[1] &&
			count[1] == count[2] &&
			count[2] == count[3]) {

			for (int i=0; i<count[0]*4; i++)
				s[pos+i] = ' ';
		} 
		else break;

		pos = s.find('w');
	}

	cout << (s == string(s.length(), ' '));
}
#include <iostream>

using namespace std;

int main() {
	string line;

	while (getline(cin, line)) {
		string s, t;
		bool result = false;

		int space = line.find(' ');

		s = line.substr(0, space);
		t = line.substr(space+1);
	
		for (int i=0, pos=0; i<t.length(); i++) {
			pos += (s[pos] == t[i]);
	
			if (pos >= s.length()) {
				result = true;
				break;
			}
		}
	
		cout << (result ? "Yes\n" : "No\n");
	}
}
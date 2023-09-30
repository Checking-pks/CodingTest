#include <iostream>
#include <algorithm>

using namespace std;

int l, c;

bool isPassword(string s) {
	int c = 0, v = 0;

	for (char n:s) {
		switch(n) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				c++;
				break;
			default:
				v++;
		}
	}

	return (c > 0 && v > 1);
}

void output(string origin, int pos, string now) {
	now += origin[pos];

	if (now.length() == l) {
		if (isPassword(now))
			cout << now << "\n";
		return;
	}

	for (int i=pos+1; i<origin.length(); i++) {
		output(origin, i, now);
	}
}

int main() {	
	cin >> l >> c;
	string s(c, ' ');

	for (int i=0; i<c; i++)
		cin >> s[i];

	sort(s.begin(), s.end());

	for (int i=0; i<c-l+1; i++) {
		output(s, i, "");
	}
}
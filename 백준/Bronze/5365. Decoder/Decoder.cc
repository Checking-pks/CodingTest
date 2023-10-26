#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0, l=0; i<num; i++) {
		string s;
		cin >> s;
		if (s.length() > l) cout << s[l];
		else cout << " ";
		l = s.length()-1;
	}
}
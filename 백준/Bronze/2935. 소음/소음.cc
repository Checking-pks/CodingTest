#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	char type;
	cin >> s1 >> type >> s2;

	if (s1.length() < s2.length())
		swap(s1, s2);

	if (type == '+') {
		s1[s1.length() - s2.length()] += 1;
		cout << s1;
	}
	else if (type == '*') {
		cout << s1 << s2.substr(1);
	}
		
}
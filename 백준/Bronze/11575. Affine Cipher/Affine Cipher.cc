#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while(testcase--) {
		int a, b;
		string s;
		cin >> a >> b >> s;

		for (int i=0; i<s.length(); i++) {
			cout << char((a * (s[i]-'A') + b) % 26 + 'A');
		}
		cout << "\n";
	}
}
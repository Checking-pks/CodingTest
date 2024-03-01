#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		int a=0, b=0, n=-1;

		for (int i=0; i<s.length(); i++) {
			if (s[i] == '0' || s[i] == '1') {
				n = s[i] - '0';
				continue;
			}

			if (n == -1) a++;
			else b++;
		}

		if (b) n = 1;
		cout << (a&1 ? !n : n) << "\n";
	}
}
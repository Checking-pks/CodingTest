#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		for (int i=0; i<s.length(); i++)
			if (s[i] == '6')
				s[i] = '9';

		sort(s.begin(), s.end(), greater<>());

		long long n1 = 0, n2 = 0;
		
		for (int i=0; i<s.length(); i++) {
			if (n1 < n2)
				n1 = n1 * 10 + (s[i] - '0');
			else
				n2 = n2 * 10 + (s[i] - '0');
		}
		
		cout << n1 * n2 << "\n";
	}
}
#include <iostream>

using namespace std;

typedef unsigned long long ull;

ull getLL(string s) {
	if (s[0] == '-') s = s.substr(1);
	return stoull(
		s[1] == '.' ?
		s.substr(0, 1) + s.substr(2) :
		s.substr(0, 2) + s.substr(3)
	);
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		string s1, s2;
		cin >> s1 >> s2;

		bool m1 = s1[0] == '-', m2 = s2[0] == '-';
		ull n1 = getLL(s1), n2 = getLL(s2);
		ull resNum = n1 * n2;

		if (m1 != m2 && resNum) cout << '-';
		
		string resStr = to_string(resNum);
		if (resStr.length() < 19) {
			cout << "0.";
			for (int i=1; i+resStr.length() <=18; i++)
				cout << '0';
			cout << resStr;
		} else {
			cout << resStr.substr(0, resStr.length() - 18) << '.' << resStr.substr(resStr.length() - 18);
		}

		cout << "\n";
	}
}
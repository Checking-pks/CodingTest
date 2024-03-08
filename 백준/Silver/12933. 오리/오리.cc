#include <iostream>

using namespace std;

int main() {
	int result = 0;
	string s, quack = "quack";
	cin >> s;

	while (s.find('q') != string::npos) {
		int idx = s.find('q');
		while (idx != string::npos) {
			for (int i=0; i<5; i++) {
				idx = s.find(quack[i], idx);
				if (idx == string::npos) {
					cout << -1;
					return 0;
				}
				s[idx] = ' ';
			}
			
			idx = s.find('q', idx);
		}

		result++;
	}

	for (char c:s) {
		if (c != ' ') {
			cout << -1;
			return 0;
		}
	}

	cout << result;
}
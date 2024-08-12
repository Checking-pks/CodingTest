#include <iostream>

using namespace std;

string S;
int result = 0;

void check(char a, char b) {
	for (int i = 0; i < S.length(); i++) {
		if (S[i] != a)
			continue;

		int pos = S.find(b, i);
		if (pos == string::npos)
			return;

		S[i] = S[pos] = '.';

		result++;
	}
}

int main() {
	cin >> S;

	check('B', 'C');
	check('A', 'B');

	cout << result;
}
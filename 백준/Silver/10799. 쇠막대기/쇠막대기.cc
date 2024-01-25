#include <iostream>

using namespace std;

int main() {
	int result=0;
	string s;
	cin >> s;

	for (int i=0, stack=0; i<s.length(); i++) {
		if (s[i] == '(') {
			stack++;
			continue;
		}

		stack--;
		result += (s[i-1] == '(' ? stack : 1);
	}

	cout << result;
}
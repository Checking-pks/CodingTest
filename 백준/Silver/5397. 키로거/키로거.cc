#include <iostream>
#include <stack>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		stack<char> before, after;
		string s;
		cin >> s;

		for (int i=0; i<s.length(); i++) {
			switch (s[i]) {
				case '<':
					if (before.size()) {
						after.push(before.top());
						before.pop();
					}
					break;
				case '>':
					if (after.size()) {
						before.push(after.top());
						after.pop();
					}
					break;
				case '-':
					if (before.size())
						before.pop();
					break;
				default:
					before.push(s[i]);
					break;
			}
		}

		while (before.size()) {
			after.push(before.top());
			before.pop();
		}

		while (after.size()) {
			cout << after.top();
			after.pop();
		}
		cout << "\n";
	}
}
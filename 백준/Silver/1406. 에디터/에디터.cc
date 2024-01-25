#include <iostream>
#include <stack>

using namespace std;

int main() {
	string s;
	cin >> s;

	stack<char> before, after;
	for (int i=0; i<s.length(); i++)
		before.push(s[i]);
	
	int M;
	cin >> M;

	while (M--) {
		char c;
		cin >> c;

		switch (c) {
			case 'L':
				if (before.size()) {
					after.push(before.top());
					before.pop();
				}
				break;
			case 'D':
				if (after.size()) {
					before.push(after.top());
					after.pop();
				}
				break;
			case 'B':
				if (before.size()) 
					before.pop();
				break;
			case 'P':
				char now;
				cin >> now;
				before.push(now);
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
}
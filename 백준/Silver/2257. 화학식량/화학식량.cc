#include <iostream>
#include <stack>
#include <map>

using namespace std;

map<char, int> mass = {{'H', 1}, {'C', 12}, {'O', 16}, {'(', -1}};

int main() {
	string s;
	cin >> s;

	int result=0, now=0;
	stack<int> bucket;
	for (char c:s) {
		switch (c) {
			case 'H':
			case 'C':
			case 'O':
			case '(':
				bucket.push(mass[c]);
				break;
			case ')':
				now = 0;
				while (bucket.top() != -1) {
					now += bucket.top();
					bucket.pop();
				}
				bucket.pop();
				bucket.push(now);
				break;
			default:
				now = bucket.top();
				bucket.pop();
				bucket.push(now * (c - '0'));
				break;
		}
	}

	while (bucket.size()) {
		result += bucket.top();
		bucket.pop();
	}

	cout << result;
}
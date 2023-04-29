#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<char> bucket;

	string str, result = "";
	cin >> str;

	for (int i=0; i<str.length(); i++) {
		switch (str[i]) {
			case '(':
				bucket.push(str[i]);
				break;
			case ')':
				while (bucket.size() && bucket.top() != '(') {
					cout << bucket.top();
					bucket.pop();
				}
				bucket.pop();
				break;
			case '*':
			case '/':
				while (bucket.size() && bucket.top() != '(') {
					if (bucket.top() == '+') break;
					if (bucket.top() == '-') break;
					
					cout << bucket.top();
					bucket.pop();
				}
				bucket.push(str[i]);
				break;
			case '+':
			case '-':
				while (bucket.size() && bucket.top() != '(') {
					cout << bucket.top();
					bucket.pop();
				}
				bucket.push(str[i]);
				break;
			default:
				cout << str[i];
				break;
		}
	}

	while (bucket.size()) {
		cout << bucket.top();
		bucket.pop();
	}

	cout << result;
}
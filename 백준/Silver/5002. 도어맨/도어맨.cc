#include <iostream>
#include <stack>

using namespace std;

int main() {
	int X, result=0;
	string s;
	cin >> X >> s;

	stack<char> bucket;
	char first = s[0], second;
	for (int i=1; i<s.length(); i++) {
		second = s[i];

		if (!bucket.size()) {
			bucket.push(first);
			first = second;
		} else if (bucket.top() != first) {
			bucket.pop();
			first = second;
		} else if (bucket.top() != second) {
			bucket.pop();
		} else {
			bucket.push(second);
		}

		if (bucket.size() > X) break;
		result = max(result, i);
	}

	if (X == 0);
	else if (!bucket.size()) result++;
	else if (bucket.top() != first) result++;
	else if (bucket.size()+1 <= X) result++;
	
	cout << result;
}
#include <iostream>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	for (int i=1; i<=n; i++) {
		string s = to_string(i);
		int sum = 0;

		for (char c:s)
			sum += c - '0';

		result += (i % sum == 0);
	}

	cout << result;
}
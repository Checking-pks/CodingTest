#include <iostream>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;

	for (int i=0, last=0, now, stack=0; i<n; i++) {
		cin >> now;

		if (now > last) {
			stack++;
			result = max(result, stack);
		} else {
			stack = 1;
		}

		last = now;
	}

	cout << result;
}
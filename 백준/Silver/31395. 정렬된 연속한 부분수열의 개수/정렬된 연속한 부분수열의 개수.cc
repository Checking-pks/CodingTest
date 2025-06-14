#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long N, last, result=1;
	cin >> N >> last;

	for (int i=1, now, stack=1; i<N; i++) {
		cin >> now;
		if (last < now) {
			stack++;
		} else {
			stack = 1;
		}

		last = now;
		result += stack;
	}

	cout << result;
}
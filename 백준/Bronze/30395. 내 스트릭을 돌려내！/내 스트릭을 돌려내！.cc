#include <iostream>

using namespace std;

int main() {
	int N, result = 0;
	cin >> N;

	for (int i=0, stack = 0, freeze = 0, now; i<N; i++) {
		cin >> now;

		if (freeze)
			freeze--;

		if (now) {
			stack++;
			result = max(result, stack);
			continue;
		}

		if (freeze) {
			stack = 0;
			continue;
		}

		freeze = 2;
	}

	cout << result;
}
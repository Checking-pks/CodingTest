#include <iostream>

using namespace std;

int main() {
	int N, result = 2;
	cin >> N;

	for (int i=2, stack = 2; i<=N; i++) {
		result += stack;

		if (!(stack % 2)) {
			stack++;
			continue;
		}

		if (!((i - 1) % 3)) 
			stack++;
	}

	cout << result;
}
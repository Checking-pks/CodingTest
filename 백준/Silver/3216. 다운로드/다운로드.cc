#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, result = 0;
	cin >> N;

	for (int i = 0, play, down, last = 0; i < N; i++) {
		cin >> play >> down;

		last -= down;

		if (last < 0) {
			result -= last;
			last = 0;
		}

		last += play;
	}

	cout << result;
}
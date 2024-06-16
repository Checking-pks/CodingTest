#include <iostream>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	if (26 * N < X || N > X) {
		cout << "!";
		return 0;
	}

	string result(N, 'A');
	X -= N;
	for (int i=N-1; X; i--) {
		if (X >= 25) {
			result[i] = 'Z';
			X -= 25;
		} else {
			result[i] = char('A' + X);
			break;
		}
	}

	cout << result;
}
#include <iostream>

using namespace std;

int main() {
	int N, M, J;
	cin >> N >> M >> J;

	int result = 0, minPos = 1, maxPos = M;
	for (int i=0, now; i<J; i++) {
		cin >> now;

		if (now < minPos) {
			result += minPos - now;
			minPos = now;
			maxPos = minPos + M - 1;
		} else if (now > maxPos) {
			result += now - maxPos;
			maxPos = now;
			minPos = maxPos - M + 1;
		}
	}

	cout << result;
}
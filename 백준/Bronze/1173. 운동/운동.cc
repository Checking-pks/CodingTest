#include <iostream>

using namespace std;

int main() {
	int N, m, M, T, R, now, result=0;
	cin >> N >> m >> M >> T >> R;

	now = m;

	while (N) {
		if (m + T > M) {
			result = -1;
			break;
		}
		
		if (now + T <= M) {
			N--;
			result++;
			now += T;
		} else {
			result++;
			now -= R;

			if (now < m) now = m;
		}
	}

	cout << result;
}
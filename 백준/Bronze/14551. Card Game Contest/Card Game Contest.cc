#include <iostream>

using namespace std;

int main() {
	int N, M, result = 1;
	cin >> N >> M;

	for (int i=0, now; i<N; i++) {
		cin >> now;

		if (!now)
			continue;

		result *= now;
		result %= M;
	}

	cout << result % M;
}
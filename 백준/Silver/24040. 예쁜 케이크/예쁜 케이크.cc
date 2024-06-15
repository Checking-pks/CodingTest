#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		long long N;
		cin >> N;

		bool result = false;

		if ((N + 1) % 3 == 0)
			result = true;

		if (N % 3 == 0 && (N / 3) % 3 == 0)
			result = true;

		cout << (result ? "TAK\n" : "NIE\n");
	}
}
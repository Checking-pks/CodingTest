#include <iostream>

using namespace std;

int main() {
	long long k, n;
	cin >> k >> n;

	if (n == 1) {
		cout << -1;
		return 0;
	}

	for (long long i=1; true; i++) {
		if ((i-k)*n >= i) {
			cout << i;
			break;
		}
	}
}
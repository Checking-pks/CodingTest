#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, num, prime;
	cin >> n;
	prime = n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int i = 2; i < num-1; i++) {
			if (num % i == 0) {
				prime--;
				break;
			}
		}

		if (num == 1) {
			prime--;
		}
	}

	cout << prime;
}
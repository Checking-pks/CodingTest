#include <iostream>
#include <cmath>
using namespace std;

int prime(int num) {
	for (int t = 2; t < int(sqrt(num)) + 1; t++) {
		if (num % t == 0) {
			return 0;
		}
	}

	if (num == 0) {
		return 0;
	}
	else if (num != 0) {
		return 1;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		int num;
		cin >> num;
		
		for (int j = 0;; j++) {
			if (prime(num/2 - j) == 1 && prime(num/2 + j)) {
				cout << num/2 - j << " " << num/2 + j << "\n";
				break;
			}
		}
		
	}
}
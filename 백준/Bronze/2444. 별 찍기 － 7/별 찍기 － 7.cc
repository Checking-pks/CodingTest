#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= 2*n-1; i++) {
		if (i <= n) {
			for (int j = 0; j < n - i; j++) {
				cout << " ";
			}

			for (int j = 0; j < 2 * i - 1; j++) {
				cout << "*";
			}
		} else if (i > n) {
			for (int j = 0; j < i - n; j++) {
				cout << " ";
			}

			for (int j = 0; j < 4 * n - 2 * i - 1; j++) {
				cout << "*";
			}
		}
		cout << "\n";
	}
}
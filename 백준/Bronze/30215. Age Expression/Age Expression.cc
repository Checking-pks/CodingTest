#include <iostream>

using namespace std;

int main() {
	int o, a, k;
	cin >> o >> a >> k;

	for (int i=1; i<=150; i++) {
		for (int j=1; j<=150; j++) {
			if (o == a * i + k * j) {
				cout << 1;
				return 0;
			}
		}
	}

	cout << 0;
}
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i=-1000; i<=1000; i++) {
		for (int j=i; j<=1000; j++) {
			if (i*j == b && i+j == -2*a) {
				if (i == j) {
					cout << i;
				} else {
					cout << min(i, j) << " " << max(i, j);
				}

				return 0;
			}
		}
	}
}
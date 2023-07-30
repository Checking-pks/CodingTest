#include <iostream>

using namespace std;

int main() {
	int red, brown;
	cin >> red >> brown;

	for (int i=1; true; i++) {
		for (int j=1; j<=i; j++) {
			if (2 * i + 2 * j - 4 == red) {
				if ((i-2) * (j-2) == brown) {
					cout << i << " " << j;
					return 0;
				}
			}
		}
	}
}
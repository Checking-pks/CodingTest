#include <iostream>

using namespace std;

int main() {
	int m, seed, x1, x2;
	cin >> m >> seed >> x1 >> x2;

	for (int i=0; i<m; i++) {
		for (int j=0; j<m; j++) {
			if (x1 != (i * seed + j) % m) continue;
			if (x2 != (i * x1 + j) % m) continue;

			cout << i << " " << j;
			return 0;
		}
	}
}
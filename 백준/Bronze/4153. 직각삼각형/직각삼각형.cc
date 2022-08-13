#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n[3];

	cin >> n[0] >> n[1] >> n[2];

	while (n[0] != 0 && n[1] != 0 && n[2] != 0) {
		int max = 0;
		
		for (int i = 0; i < 3; i++) {
			if (max < n[i]) {
				max = n[i];
			}
		}

		for (int i = 0; i < 3; i++) {
			if (max == n[i]) {
				n[i] = 0;
			}
		}

		if (max * max == n[0] * n[0] + n[1] * n[1] + n[2] * n[2]) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}

		cin >> n[0] >> n[1] >> n[2];

	}
}
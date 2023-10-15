#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n) {
		int idx=0, min=10000;
		
		for (int i=1, now; i<=n; i++) {
			cin >> now;
			now -= 2023;
			if (now < 0) now = -now;

			if (min > now) {
				min = now;
				idx = i;
			}
		}

		cout << idx << "\n";
		cin >> n;
	}
}
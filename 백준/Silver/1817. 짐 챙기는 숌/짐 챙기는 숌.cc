#include <iostream>

using namespace std;

int main() {
	int n, m, result = 0;
	cin >> n >> m;

	for (int i=0, now, box = 0; i<n; i++) {
		cin >> now;

		if (box - now >= 0) {
			box -= now;
		} else {
			result++;
			box = m;
			box -= now;
		}
	}

	cout << result;
}
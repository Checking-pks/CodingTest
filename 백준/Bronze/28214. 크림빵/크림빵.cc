#include <iostream>

using namespace std;

int main() {
	int n, k, p, result = 0;
	cin >> n >> k >> p;

	for (int i=0; i<n; i++) {
		int cream = p;
		for (int j=0, now; j<k; j++) {
			cin >> now;
			cream -= !now;
		}

		result += (cream > 0);
	}

	cout << result;
}
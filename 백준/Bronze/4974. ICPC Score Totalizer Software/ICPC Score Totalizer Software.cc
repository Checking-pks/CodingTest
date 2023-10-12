#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n) {
		int total=0, minNum=1001, maxNum=0;

		for (int i=0, now; i<n; i++) {
			cin >> now;

			total += now;
			minNum = min(minNum, now);
			maxNum = max(maxNum, now);
		}

		cout << (total - minNum - maxNum) / (n-2) << "\n";
		
		cin >> n;
	}
}
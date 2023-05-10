#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while(testcase--) {
		float num;
		cin >> num;

		cout << "Pairs for " << num << ":";

		if (num > 2) cout << " " << 1 << " " << num-1;
		
		for (int i=2; i<num/2; i++) {
			cout << ", " << i << " " << num-i;
		}

		cout << "\n";
	}
}
#include <iostream>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		cin >> n;

		for (int i=0; i<n; i++) cout << "#";
		for (int i=2; i<n; i++) {
			cout << "\n#";
			for (int j=2; j<n; j++) cout << "J";
			cout << "#";
		}
		cout << "\n";
		if (n > 1) {
			for (int i=0; i<n; i++) cout << "#";
			if (testcase) cout << "\n";
		}
		if (testcase) cout << "\n";
	}
}
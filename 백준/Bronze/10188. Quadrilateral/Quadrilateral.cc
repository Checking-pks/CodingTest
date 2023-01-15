#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
	    int r, c;
	    cin >> r >> c;

		if (i) cout << "\n";

		for (int j=0; j<c; j++) {
			for (int k=0; k<r; k++) {
				cout << "X";
			}
			cout << "\n";
		}
	}
}
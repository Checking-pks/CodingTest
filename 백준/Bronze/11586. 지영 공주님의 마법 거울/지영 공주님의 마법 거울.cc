#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	
	vector<string> field(n, "");

	for (int i=0; i<n; i++)
		cin >> field[i];

	cin >> k;

	switch(k) {
		case 1:
			for (int i=0; i<n; i++) {
				cout << field[i] << "\n";
			}
			break;
		case 2:
			for (int i=0; i<n; i++) {
				for (int j=n-1; j>=0; j--) {
					cout << field[i][j];
				}
				cout << "\n";
			}
			break;
		case 3:
			for (int i=n-1; i>=0; i--) {
				cout << field[i] << "\n";
			}
			break;
	}
}
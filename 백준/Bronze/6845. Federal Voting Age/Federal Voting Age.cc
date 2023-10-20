#include <iostream>

using namespace std;

int main() {
	int n, dateY=1989, dateM=2, dateD=27;
	cin >> n;

	for (int i=0, y, m, d; i<n; i++) {
		cin >> y >> m >> d;

		if (y < dateY) cout << "Yes\n";
		else if (y == dateY && m < dateM) cout << "Yes\n";
		else if (y == dateY && m == dateM && d <= dateD) cout << "Yes\n";
		else cout << "No\n";
	}
}
#include <iostream>

using namespace std;

int main() {
	bool result = true;
	int n, m;
	cin >> n >> m;
	for (int i=0, k; i<m; i++) {
		cin >> k;

		for (int j=0, last=-1, now; j<k; j++, last = now) {
			cin >> now;

			if (last==-1) {
				last = now;
				continue;
			}

			if (result && last < now) 
				result = false;
		}
	}

	cout << (result ? "Yes" : "No");
}
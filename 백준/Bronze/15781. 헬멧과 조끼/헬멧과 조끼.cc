#include <iostream>

using namespace std;

int main() {
	int n, m, nMax = 0, mMax = 0;
	cin >> n >> m;

	for (int i=0, now; i<n; i++) {
		cin >> now;
		nMax = max(nMax, now);
	}

	for (int i=0, now; i<m; i++) {
		cin >> now;
		mMax = max(mMax, now);
	}

	cout << nMax + mMax;
}
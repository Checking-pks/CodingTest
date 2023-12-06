#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> numList(k+1, 0);
	numList[0] = 1;

	for (int i=0, now; i<n; i++) {
		cin >> now;
		for (int j=now; j<=k; j++) {
			numList[j] += numList[j-now];
		}
	}

	cout << numList[k];
}
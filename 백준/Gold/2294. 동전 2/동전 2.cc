#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> coins(n);
	vector<int> numList(k+1, -1);
	numList[0] = 0;

	for (int i=0; i<n; i++) {
		cin >> coins[i];
		for (int j=coins[i]; j<=k; j+=coins[i]) {
			if (numList[j] == -1)
				numList[j] = j/coins[i];
			else
				numList[j] = min(numList[j], j/coins[i]);
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=1; j<=k-coins[i]; j++) {
			if (numList[j] == -1) continue;
			if (numList[j+coins[i]] == -1)
				numList[j+coins[i]] = numList[j] + 1;
			else
				numList[j+coins[i]] = min(numList[j+coins[i]], numList[j] + 1);
		}
	}

	cout << numList[k];
}
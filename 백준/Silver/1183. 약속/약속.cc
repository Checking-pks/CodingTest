#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int algorithm(int n) {
	vector<int> numList(n);
	for (int i=0, t1, t2; i<n; i++) {
		cin >> t1 >> t2;
		numList[i] = t1 - t2;
	}

	if (n & 1) return 1;
	
	sort(numList.begin(), numList.end());
	return abs(numList[n/2] - numList[n/2-1]) +1;
}

int main() {
	int n;
	cin >> n;
	cout << algorithm(n);
}
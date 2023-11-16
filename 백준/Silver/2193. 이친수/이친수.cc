#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n;
	cin >> n;

	if (n < 3) {
		cout << 1;
		return 0;
	}

	vector<long long> numList = {1, 1, 0};

	for (int i=3; i<n; i++) {
		vector<long long> newNumList(3);
		newNumList[0] = numList[0] + numList[2];
		newNumList[1] = numList[0] + numList[2];
		newNumList[2] = numList[1];
		numList = newNumList;
	}

	cout << numList[0] + numList[1] + numList[2];
}
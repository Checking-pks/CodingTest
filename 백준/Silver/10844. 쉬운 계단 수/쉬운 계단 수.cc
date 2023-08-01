#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	vector<int> numList = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	for (int i=1; i<n; i++) {
		vector<int> newNumList(10, 0);

		newNumList[0] = numList[1];
		newNumList[9] = numList[8];

		for (int i=1; i<9; i++) {
			newNumList[i] = (numList[i-1] + numList[i+1]) % 1000000000;
		}

		numList = newNumList;
	}

	for (int num:numList)
		result = (result + num) % 1000000000;

	cout << result;
}
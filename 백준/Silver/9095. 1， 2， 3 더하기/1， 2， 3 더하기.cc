#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int nowNum;
		cin >> nowNum;

		vector<int>numList(nowNum + 3, 0);

		numList[1] = 1;
		numList[2] = 1;
		numList[3] = 1;

		for (int j=1; j<numList.size()-3; j++) {
			numList[j+1] += numList[j];
			numList[j+2] += numList[j];
			numList[j+3] += numList[j];
		}

		cout << numList[nowNum] << "\n";
	}

	return 0;
}
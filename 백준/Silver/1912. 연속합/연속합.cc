#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, result = -1001;
	vector<int> numList;

	// input
	cin >> num;

	for (int i=0, nowNum; i<num; i++) {
		cin >> nowNum;
		numList.push_back(nowNum);
	}

	// simulate
	for (int i=0, sum=0; i<numList.size(); i++) {
		if (sum + numList[i] > 0)
			sum += numList[i];
		else
			sum = numList[i];

		if (result < sum)
			result = sum;
	}

	for (int i=numList.size() - 1, sum=0; i>=0; i--) {
		if (sum + numList[i] > 0)
			sum += numList[i];
		else
			sum = numList[i];

		if (result < sum)
			result = sum;
	}

	// output
	cout << result;
}
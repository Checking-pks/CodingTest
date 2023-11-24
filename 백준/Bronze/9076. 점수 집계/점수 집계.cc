#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		vector<int> numList(5);
		for (int i=0; i<5; i++)
			cin >> numList[i];

		sort(numList.begin(), numList.end());

		if (numList[3] - numList[1] >= 4)
			cout << "KIN\n";
		else
			cout << numList[1] + numList[2] + numList[3] << "\n";
	}
}
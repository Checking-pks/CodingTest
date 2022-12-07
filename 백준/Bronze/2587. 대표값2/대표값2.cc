#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int sum = 0;
	vector<int> numList = {0, 0, 0, 0, 0};

	for (int i=0;i<5;i++) {
		cin >> numList[i];
		sum += numList[i];
	}

	sort(numList.begin(), numList.end());

	cout << sum / 5 << "\n" << numList[2];
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> numList(4, 0);

	for (int i=0; i<4; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());
	
	cout << numList[0] * numList[2];
}
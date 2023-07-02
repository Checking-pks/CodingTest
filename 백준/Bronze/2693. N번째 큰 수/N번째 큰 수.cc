#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		vector<int> nowList(10, 0);

		for (int i=0; i<10; i++)
			cin >> nowList[i];

		sort(nowList.begin(), nowList.end());

		cout << nowList[7] << "\n";
	}
}
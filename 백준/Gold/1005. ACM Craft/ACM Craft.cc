#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int dp(unordered_map<int, int> &numList, vector<int> &constructTime, vector<vector<int>> &orderList, int target) {
	if (numList.find(target) != numList.end()) return numList[target];

	int now = 0;
	for (int i=0; i<orderList[target].size(); i++) 
		now = max(now, dp(numList, constructTime, orderList, orderList[target][i]));
	numList[target] = now + constructTime[target];
	return numList[target];
}

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, k;
		cin >> n >> k;

		vector<int> constructTime(n+1);
		for (int i=1; i<=n; i++)
			cin >> constructTime[i];

		vector<vector<int>> orderList(n+1);
		for (int i=0, first, second; i<k; i++) {
			cin >> first >> second;
			orderList[second].push_back(first);
		}

		int target;
		cin >> target;

		unordered_map<int, int> numList;
		cout << dp(numList, constructTime, orderList, target) << "\n";
	}
}
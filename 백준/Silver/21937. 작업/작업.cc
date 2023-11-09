#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> result;

void dfs(vector<vector<int>> & numList, int target) {
	if (result.find(target) != result.end()) return;
	result.insert(target);

	for (int i=0; i<numList[target].size(); i++) {
		dfs(numList, numList[target][i]);
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> numList(n+1, vector<int>());

	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;
		numList[b].push_back(a);
	}

	int target;
	cin >> target;

	dfs(numList, target);
	cout << result.size() - 1;
}
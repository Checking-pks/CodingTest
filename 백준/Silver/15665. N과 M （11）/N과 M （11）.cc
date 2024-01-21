#include <iostream>
#include <vector>
#include <set>

using namespace std;

void dfs(set<int> &numList, vector<int> result, int depth) {
	if (depth < 1) {
		for (int i=0; i<result.size(); i++)
			cout << result[i] << " ";
		cout << "\n";
		return;
	}
	for (int n:numList) {
		result.push_back(n);
		dfs(numList, result, depth-1);
		result.pop_back();
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	set<int> numList;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		numList.insert(now);
	}

	for (int n:numList) {
		dfs(numList, {n}, M-1);
	}
}
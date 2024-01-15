#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<int> &result, vector<vector<int>> &lineList, int nowPos, int depth) {
	result[nowPos] = depth;
	for (int i=0; i<lineList[nowPos].size(); i++) {
		if (result[lineList[nowPos][i]] != -1) continue;
		dfs(result, lineList, lineList[nowPos][i], depth+1);
	}
}

int main() {
	int N, M, R;
	cin >> N >> M >> R;

	vector<vector<int>> lineList(N+1);
	vector<int> result(N+1, -1);

	for (int i=0, p1, p2; i<M; i++) {
		cin >> p1 >> p2;
		lineList[p1].push_back(p2);
		lineList[p2].push_back(p1);
	}

	for (int i=1; i<=N; i++)
		sort(lineList[i].begin(), lineList[i].end());

	dfs(result, lineList, R, 0);

	for (int i=1; i<=N; i++)
		cout << result[i] << "\n";
}
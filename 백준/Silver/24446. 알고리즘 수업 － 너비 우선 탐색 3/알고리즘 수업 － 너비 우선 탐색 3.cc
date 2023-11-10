#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, r;
	cin >> n >> m >> r;

	vector<vector<int>> nodes(n+1, vector<int>(0));

	for (int i=0, x, y; i<m; i++) {
		cin >> x >> y;
		nodes[x].push_back(y);
		nodes[y].push_back(x);
	}

	for (int i=1; i<=n; i++) {
		sort(nodes[i].begin(), nodes[i].end(), greater<>());
	}

	vector<bool> alreadyVisit(n+1, false);
	vector<int> result(n+1, -1);
	queue<pair<int, int>> bucket;

	bucket.push({r, 0});
	alreadyVisit[r] = true;

	for (int i=1; bucket.size(); i++) {
		pair<int, int> now = bucket.front();
		bucket.pop();

		if (result[now.first] != -1) continue;
		result[now.first] = now.second;

		for (int j=0; j<nodes[now.first].size(); j++) {
			if (alreadyVisit[nodes[now.first][j]]) continue;
			alreadyVisit[nodes[now.first][j]] = true;
			bucket.push({nodes[now.first][j], now.second+1});
		}
	}

	for (int i=1; i<=n; i++)
		cout << result[i] << "\n";
}
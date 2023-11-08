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
		sort(nodes[i].begin(), nodes[i].end());
	}

	vector<bool> alreadyVisit(n+1, false);
	vector<int> result(n+1, 0);
	queue<int> bucket;
	
	bucket.push(r);
	alreadyVisit[r] = true;

	for (int i=1; bucket.size(); i++) {
		int now = bucket.front();
		bucket.pop();

		if (result[now]) continue;
		result[now] = i;

		for (int j=0; j<nodes[now].size(); j++) {
			if (alreadyVisit[nodes[now][j]]) continue;
			alreadyVisit[nodes[now][j]] = true;
			bucket.push(nodes[now][j]);
		}
	}

	for (int i=1; i<=n; i++)
		cout << result[i] << "\n";
}
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, k, result=0;
	cin >> n >> k;

	vector<vector<int>> nodeList(n);
	vector<int> numList(n);
	vector<bool> visit(n);
	for (int i=0, parent, child; i<n-1; i++) {
		cin >> parent >> child;
		nodeList[parent].push_back(child);
	}

	for (int i=0; i<n; i++)
		cin >> numList[i];

	queue<pair<int, int>> bucket;
	bucket.push({0, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		bucket.pop();
		if (now.second > k) break;

		result += numList[now.first];
			
		for (int i=0; i<nodeList[now.first].size(); i++) {
			int next = nodeList[now.first][i];
			if (visit[next]) continue;
			visit[next] = false;
			bucket.push({next, now.second+1});
		}
	}

	cout << result;
}
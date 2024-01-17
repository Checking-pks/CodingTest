#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, start, end, relation;
	cin >> n >> start >> end >> relation;

	vector<vector<int>> relationList(n+1);

	for (int i=0, a1, a2; i<relation; i++) {
		cin >> a1 >> a2;
		relationList[a1].push_back(a2);
		relationList[a2].push_back(a1);
	}

	queue<pair<int, int>> bucket;
	vector<bool> visit(n+1);
	bucket.push({start, 0});
	visit[start] = true;

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == end) break;
		bucket.pop();

		for (auto next:relationList[now.first]) {
			if (visit[next]) continue;
			visit[next] = true;
			bucket.push({next, now.second+1});
		}
	}

	if (bucket.size())
		cout << bucket.front().second;
	else
		cout << -1;
}
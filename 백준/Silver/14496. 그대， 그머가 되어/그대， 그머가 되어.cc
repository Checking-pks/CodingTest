#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int a, b, N, M;
	cin >> a >> b >> N >> M;

	queue<pair<int, int>> bucket;
	vector<int> visit(N+1);
	vector<vector<int>> changer(N+1);
	for (int i=0, before, after; i<M; i++) {
		cin >> before >> after;
		changer[before].push_back(after);
		changer[after].push_back(before);
	}

	bucket.push({a, 0});
	visit[a] = true;

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == b) break;
		bucket.pop();

		for (int n : changer[now.first]) {
			if (visit[n]) continue;
			bucket.push({n, now.second+1});
			visit[n] = true;
		}
	}

	if (bucket.size())
		cout << bucket.front().second;
	else
		cout << -1;
}
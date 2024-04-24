#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int N, M, K, X;
	cin >> N >> M >> K >> X;

	vector<vector<int>> route(N + 1);
	for (int i = 0, a, b; i < M; i++) {
		cin >> a >> b;
		route[a].push_back(b);
	}

	vector<int> result;
	vector<bool> visit(N + 1);
	queue<pair<int, int>> bucket;
	visit[X] = true;
	bucket.push({X, 0});

	while (bucket.size()) {
		int pos = bucket.front().first;
		int dist = bucket.front().second;
		bucket.pop();

		if (dist == K)
			result.push_back(pos);

		for (int next : route[pos]) {
			if (visit[next])
				continue;
			visit[next] = true;

			bucket.push({next, dist + 1});
		}
	}

	sort(result.begin(), result.end());

	if (result.empty())
		cout << -1;
	else
		for (int pos : result)
			cout << pos << "\n";
}
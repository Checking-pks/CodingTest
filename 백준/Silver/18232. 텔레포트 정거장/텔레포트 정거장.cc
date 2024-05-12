#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int N, M, S, E;
	cin >> N >> M >> S >> E;

	vector<vector<int>> teleport(N + 1);
	vector<int> visit(N + 1, 300'001);

	for (int i = 0, a, b; i < M; i++) {
		cin >> a >> b;
		teleport[a].push_back(b);
		teleport[b].push_back(a);
	}

	queue<int> bucket;
	bucket.push(S);
	visit[S] = 0;

	while (bucket.size()) {
		int now = bucket.front();
		bucket.pop();

		if (now == E)
			break;

		for (int i = 0; i < teleport[now].size(); i++) {
			int next = teleport[now][i];

			if (visit[next] <= visit[now] + 1)
				continue;

			bucket.push(next);
			visit[next] = visit[now] + 1;
		}

		if (now < N && visit[now + 1] > visit[now] + 1) {
			bucket.push(now + 1);
			visit[now + 1] = visit[now] + 1;
		}

		if (now > 1 && visit[now - 1] > visit[now] + 1) {
			bucket.push(now - 1);
			visit[now - 1] = visit[now] + 1;
		}
	}

	cout << visit[E];
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> nodes;
vector<int> visit;

void dfs(int now, int &times) {
	visit[now] = times++;

	sort(nodes[now].begin(), nodes[now].end(), greater<>());

	for (int i=0; i<nodes[now].size(); i++) {
		if (visit[nodes[now][i]]) continue;
		dfs(nodes[now][i], times);
	}
}

int main() {
	int N, M, R, times=1;
	cin >> N >> M >> R;

	nodes = vector<vector<int>> (N+1);
	visit = vector<int> (N+1);

	for (int i=0, s1, s2; i<M; i++) {
		cin >> s1 >> s2;
		nodes[s1].push_back(s2);
		nodes[s2].push_back(s1);
	}

	dfs(R, times);

	for (int i=1; i<=N; i++)
		cout << visit[i] << "\n";
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<long long>> nodes;
vector<long long> depth, visit;

void dfs(long long now, long long &times) {
	visit[now] = times++;
	
	sort(nodes[now].begin(), nodes[now].end(), greater<>());

	for (long long i=0; i<nodes[now].size(); i++) {
		if (visit[nodes[now][i]]) continue;
		depth[nodes[now][i]] = depth[now] + 1;
		dfs(nodes[now][i], times);
	}
}

int main() {
	long long N, M, R, times=1, result=0;
	cin >> N >> M >> R;

	nodes = vector<vector<long long>> (N+1);
	depth = vector<long long> (N+1, -1);
	visit = vector<long long> (N+1);

	for (long long i=0, s1, s2; i<M; i++) {
		cin >> s1 >> s2;
		nodes[s1].push_back(s2);
		nodes[s2].push_back(s1);
	}

	depth[R] = 0;
	dfs(R, times);

	for (long long i=1; i<=N; i++) 
		result += depth[i] * visit[i];

	cout << result;
}
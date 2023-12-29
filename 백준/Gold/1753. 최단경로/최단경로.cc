#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 3000001;

void dijkstra(vector<vector<pair<int, int>>> &field, vector<int> &result, int start) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> bucket;
	bucket.push({0, start});
	result[start] = 0;

	while (bucket.size()) {
		int nowDist = bucket.top().first;
		int nowIdx = bucket.top().second;
		bucket.pop();

		for (int i=0; i<field[nowIdx].size(); i++) {
			int newDist = field[nowIdx][i].first + nowDist;
			int newIdx = field[nowIdx][i].second;
			if (result[newIdx] <= newDist) continue;
			result[newIdx] = newDist;
			bucket.push({newDist, newIdx});
		}
	}
}

int main() {
	int v, e, start;
	cin >> v >> e >> start;

	vector<vector<pair<int, int>>> field(v+1);
	vector<int> result(v+1, INF);

	for (int i=0, a, b, distance; i<e; i++) {
		cin >> a >> b >> distance;
		field[a].push_back({distance, b});
	}

	dijkstra(field, result, start);

	for (int i=1; i<=v; i++) {
		if (result[i] == INF) cout << "INF\n";
		else cout << result[i] << "\n";
	}
}
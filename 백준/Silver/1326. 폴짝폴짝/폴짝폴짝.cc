#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, start, end;
	cin >> n;
	vector<int> numList(n+1);
	for (int i=1; i<=n; i++)
		cin >> numList[i];
	cin >> start >> end;

	queue<pair<int, int>> bucket;
	vector<bool> visit(n+1);
	bucket.push({start, 0});
	visit[start] = true;

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == end) break;
		bucket.pop();

		for (int i=now.first%numList[now.first]; i<=n; i+=numList[now.first]) {
			if (i == 0) continue;
			if (visit[i]) continue;
			visit[i] = true;
			bucket.push({i, now.second+1});
		}
	}

	if (bucket.size())
		cout << bucket.front().second;
	else
		cout << -1;
}
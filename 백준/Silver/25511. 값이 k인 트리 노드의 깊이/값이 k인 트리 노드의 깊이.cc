#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<vector<int>> nodeList(n);
	vector<int> numList(n);
	for (int i=0, parent, child; i<n-1; i++) {
		cin >> parent >> child;
		nodeList[parent].push_back(child);
	}

	for (int i=0; i<n; i++)
		cin >> numList[i];

	if (numList[0] == k) {
		cout << 0;
		return 0;
	}

	queue<pair<int, int>> bucket;
	bucket.push({0, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		bucket.pop();

		for (int i=0; i<nodeList[now.first].size(); i++) {
			int next = nodeList[now.first][i];
			if (numList[next] == -1) continue;
			if (numList[next] == k) {
				cout << now.second+1;
				break;
			}
			numList[next] = -1;
			bucket.push({next, now.second+1});
		}
	}
}
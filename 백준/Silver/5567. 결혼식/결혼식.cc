#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, m, result = -1;
	cin >> n >> m;

	vector<vector<bool>> friends(n, vector<bool>(n, false));
	vector<bool> alreadyCheck(n, false);
	queue<pair<int, int>> bucket;
	
	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;
		friends[--a][--b] = true;
		friends[b][a] = true;
	}

	bucket.push({0, 0});

	while (bucket.size()) {
		pair<int, int> now = bucket.front();
		bucket.pop();

		if (now.first > 2) continue;

		alreadyCheck[now.second] = true;
		
		for (int i=0; i<n; i++) {
			if (!friends[now.second][i]) continue;
			if (alreadyCheck[i]) continue;

			bucket.push({now.first+1, i});
		}
	}

	for (bool b:alreadyCheck)
		result += b;

	cout << result;
}
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> field(n, vector<int>(n, 0));

	for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++)
			cin >> field[i][j];

	queue<pair<int, int>> bucket;
	bucket.push({0, 0});

	while (bucket.size()) {
		pair<int, int> now = bucket.front();
		if (now.first == n-1 && now.second == n-1) break;
		bucket.pop();
		if (now.first >= n || now.second >= n) continue;
		if (field[now.first][now.second] == 0) continue;
		bucket.push({now.first + field[now.first][now.second], now.second});
		bucket.push({now.first, now.second + field[now.first][now.second]});
	}

	if (bucket.size()) cout << "HaruHaru";
	else cout << "Hing";
}
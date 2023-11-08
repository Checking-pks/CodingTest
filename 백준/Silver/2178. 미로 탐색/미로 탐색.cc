#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<bool>> field(n+2, vector<bool>(m+2, 0));

	for (int i=1; i<=n; i++) {
		string s;
		cin >> s;
		for (int j=0; j<m; j++) {
			field[i][j+1] = s[j] - '0';
		}
	}

	queue<pair<pair<int, int>, int>> bucket;
	bucket.push({{1, 1}, 1});

	while (bucket.size()) {
		auto now = bucket.front();

		if (now.first.first == n && now.first.second == m) break;
		
		bucket.pop();

		// 만약 내 위치가 0일 경우 (벽인 경우) continue
		if (field[now.first.first][now.first.second] == 0) continue;

		// 여기를 0으로 만들어준다.
		field[now.first.first][now.first.second] = 0;

		// 다시 버킷에 넣기
		bucket.push({{now.first.first+1, now.first.second}, now.second+1});
		bucket.push({{now.first.first-1, now.first.second}, now.second+1});
		bucket.push({{now.first.first, now.first.second+1}, now.second+1});
		bucket.push({{now.first.first, now.first.second-1}, now.second+1});		
	}

	cout << bucket.front().second;
}
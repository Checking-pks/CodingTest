#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	vector<pair<int, int>> move = {
		{-2, 1}, {-1, 2}, {1, 2}, {2, 1},
		{2, -1}, {1, -2}, {-1, -2}, {-2, -1}
	};
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int l;
		pair<int, int> nowPos, targetPos;
		cin >> l;
		cin >> nowPos.first >> nowPos.second
			>> targetPos.first >> targetPos.second;

		vector<vector<bool>> alreadyVisit(l, vector<bool>(l, false));
		queue<pair<pair<int, int>, int>> bucket;
		bucket.push({nowPos, 0});

		while (bucket.size()) {
			auto now = bucket.front();
			if (now.first == targetPos) break;
			bucket.pop();
			if (now.first.first < 0 || now.first.first >= l) continue;
			if (now.first.second < 0 || now.first.second >= l) continue;
			if (alreadyVisit[now.first.first][now.first.second]) continue;
			alreadyVisit[now.first.first][now.first.second] = true;
			
			for (int i=0; i<move.size(); i++) {
				bucket.push({{now.first.first + move[i].first, now.first.second + move[i].second}, now.second+1});
			}
		}

		cout << bucket.front().second << "\n";
	}
}
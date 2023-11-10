#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<bool>> field;
vector<vector<int>> moveList = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int bfs(vector<vector<bool>> field, pair<int, int> pos) {
	int result=0;

	queue<vector<int>> bucket;
	bucket.push({pos.first, pos.second, 0});
	field[pos.first][pos.second] = false;

	while (bucket.size()) {
		vector<int> now = bucket.front();
		bucket.pop();

		result = max(result, now[2]);

		for (int i=0; i<moveList.size(); i++) {
			pair<int, int> newPos = {now[0] + moveList[i][0], now[1] + moveList[i][1]};
			if (!field[newPos.first][newPos.second]) continue;
			field[newPos.first][newPos.second] = false;
			bucket.push({newPos.first, newPos.second, now[2]+1});
		}
	}

	return result;
}

int main() {
	int r, c, result=0;
	cin >> r >> c;

	field = vector<vector<bool>>(r+2, vector<bool>(c+2, false));

	for (int i=1; i<=r; i++) {
		string s;
		cin >> s;

		for (int j=0; j<c; j++) {
			field[i][j+1] = (s[j] == 'L');
		}
	}

	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (!field[i][j]) continue;
			result = max(result, bfs(field, {i, j}));
		}
	}

	cout << result;
}
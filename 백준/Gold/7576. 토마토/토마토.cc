#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool isAllRipe(vector<vector<int>> field) {
	for (int i=0; i<field.size(); i++) 
		for (int j=0; j<field[i].size(); j++) 
			if (field[i][j] == 0)
				return false;

	return true;
}

int main() {
	int n, m;
	cin >> m >> n;

	vector<vector<int>> field(n + 2, vector<int>(m + 2, -1));
	vector<vector<bool>> alreadyCheck(n + 2, vector<bool>(m + 2, false));
	list<vector<int>> bucket;
	int result;

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			int nowNum;
			cin >> nowNum;

			field[i][j] = nowNum;

			if (nowNum == 1) 
				bucket.push_back({i, j, 0});
		}
	}

	while (bucket.size()) {
		vector<int> nowPos = bucket.front();
		bucket.pop_front();
		
		if (alreadyCheck[nowPos[0]][nowPos[1]] || field[nowPos[0]][nowPos[1]] == -1)
			continue;

		field[nowPos[0]][nowPos[1]] = 1;
		alreadyCheck[nowPos[0]][nowPos[1]] = true;

		bucket.push_back({nowPos[0] + 1, nowPos[1], nowPos[2] + 1});
		bucket.push_back({nowPos[0] - 1, nowPos[1], nowPos[2] + 1});
		bucket.push_back({nowPos[0], nowPos[1] + 1, nowPos[2] + 1});
		bucket.push_back({nowPos[0], nowPos[1] - 1, nowPos[2] + 1});

		result = nowPos[2];
	}

	cout << (isAllRipe(field) ? result : -1);
}
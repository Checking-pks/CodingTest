#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> nearList = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

bool isTop(vector<vector<int>> &field, vector<vector<bool>> &check, int x, int y, int value) {
	
	if (field[x][y] != value)
		return true;

	int nowValue = field[x][y];
	
	check[x][y] = true;
	field[x][y] = 0;

	for (int i=0; i<nearList.size(); i++) {
		int nearX = x + nearList[i].first;
		int nearY = y + nearList[i].second;

		if (nowValue < field[nearX][nearY]) 
			return false;

		if (!isTop(field, check, nearX, nearY, value)) 
			return false;
	}

	return true;
}

int main() {
	int N, M, result = 0;
	cin >> N >> M;

	vector<vector<int>> field(N + 2, vector<int>(M + 2));
	vector<vector<bool>> check(N + 2, vector<bool>(M + 2));

	for (int i=1; i<=N; i++) 
		for (int j=1; j<=M; j++) 
			cin >> field[i][j];

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			if (!field[i][j])
				continue;

			if (check[i][j])
				continue;

			vector<vector<int>> nowField = field;

			if (isTop(nowField, check, i, j, nowField[i][j])) 
				result++;
		}
	}

	cout << result;
}
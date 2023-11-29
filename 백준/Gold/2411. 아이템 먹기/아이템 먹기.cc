#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
	return a[0] + a[1] < b[0] + b[1];
}

int pathNavigation(vector<vector<int>> &field, vector<int> startPos, vector<int> targetPos) {
	field[startPos[0]][startPos[1]] = 1;

	for (int i=startPos[0], num=1; i<=targetPos[0]; i++) {
		if (field[i][startPos[1]] == -1) num = -1;
		field[i][startPos[1]] = num;
	}

	for (int i=startPos[1], num=1; i<=targetPos[1]; i++) {
		if (field[startPos[0]][i] == -1) num = -1;
		field[startPos[0]][i] = num;
	}

	for (int i=startPos[0]+1; i<=targetPos[0]; i++) {
		for (int j=startPos[1]+1; j<=targetPos[1]; j++) {
			if (field[i][j] == -1) continue;
			field[i][j] += (field[i-1][j] != -1 ? field[i-1][j] : 0);
			field[i][j] += (field[i][j-1] != -1 ? field[i][j-1] : 0);
		}
	}
	
	return field[targetPos[0]][targetPos[1]];
}

int main() {
	int row, col, itemNum, obstacleNum, result=1;
	cin >> row >> col >> itemNum >> obstacleNum;

	vector<vector<int>> field(row+2, vector<int>(col+2, 0));
	vector<vector<int>> itemPos(itemNum+1, vector<int>(2, 1));

	for (int i=1; i<=itemNum; i++) {
		cin >> itemPos[i][0] >> itemPos[i][1];
	}

	itemPos.push_back({row, col});

	for (int i=0, x, y; i<obstacleNum; i++) {
		cin >> x >> y;
		field[x][y] = -1;
	}

	sort(itemPos.begin(), itemPos.end(), cmp);

	for (int i=1; i<itemPos.size(); i++) {
		result *= pathNavigation(field, itemPos[i-1], itemPos[i]);
	}

	cout << result;
}
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> movePos = {
	{-1, 0}, {0, 1}, {1, 0}, {0, -1}
};

void simulate(vector<vector<int>> &field, pair<int, int> pos, int direction) {
	if (field[pos.first][pos.second] == 0) field[pos.first][pos.second] = 2;
	if (field[pos.first][pos.second] == 1) return;

	pair<int, int> nextPos = {
		pos.first - movePos[direction].first, 
		pos.second - movePos[direction].second
	};
	
	for (int i=movePos.size()-1; i>=0; i--) {
		int dir = (direction + i) % movePos.size();
		int xPos = pos.first + movePos[dir].first;
		int yPos = pos.second + movePos[dir].second;

		if (field[xPos][yPos] == 0) {
			nextPos = {xPos, yPos};
			direction = dir;
			break;
		}
	}

	simulate(field, nextPos, direction);
}

int main() {
	int n, m, result=0;
	int direction;
	pair<int, int> pos;
	cin >> n >> m;
	cin >> pos.first >> pos.second >> direction;
	
	vector<vector<int>> field(n, vector<int>(m));
	for (int i=0; i<n; i++) 
		for (int j=0; j<m; j++) 
			cin >> field[i][j];

	simulate(field, pos, direction);

	for (int i=0; i<n; i++) 
		for (int j=0; j<m; j++) 
			result += field[i][j] == 2;

	cout << result;
}
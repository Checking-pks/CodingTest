#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> spreadList = {
	{1, 0}, {0, 1}, {-1, 0}, {0, -1}
};

void spreadDust(int &row, int &col, vector<vector<int>> &field) {
	vector<vector<int>> result = field;

	for (int i=1; i<=row; i++) {
		for (int j=1; j<=col; j++) {
			if (field[i][j] <= 0) continue;
			int spreadSize = field[i][j] / 5;
			for (int k=0; k<spreadList.size(); k++) {
				int xPos = i + spreadList[k].first;
				int yPos = j + spreadList[k].second;
				if (field[xPos][yPos] < 0) continue;
				result[xPos][yPos] += spreadSize;
				result[i][j] -= spreadSize;
			}
		}
	}

	field = result;
}

void cleanAir(int &row, int &col, vector<vector<int>> &field, pair<int, int> &airPurifier) {
	vector<vector<int>> result = field;
	result[airPurifier.first][2] = 0;
	result[airPurifier.second][2] = 0;

	for (int i=3; i<=col; i++) {
		result[airPurifier.first][i]  = field[airPurifier.first][i-1];
		result[airPurifier.second][i] = field[airPurifier.second][i-1];
	}

	for (int i=airPurifier.first-1; i>0; i--) 
		result[i][col] = field[i+1][col];
	for (int i=airPurifier.second+1; i<=row; i++)
		result[i][col] = field[i-1][col];

	for (int i=col-1; i>=1; i--) {
		result[1][i]   = field[1][i+1];
		result[row][i] = field[row][i+1];
	}

	for (int i=2; i<airPurifier.first; i++)
		result[i][1] = field[i-1][1];
	for (int i=row-1; i>airPurifier.second; i--) {
		result[i][1] = field[i+1][1];
	}

	field = result;
}

int main() {
	int row, col, time, result = 0;
	cin >> row >> col >> time;

	vector<vector<int>> field(row+2, vector<int>(col+2, -1));
	pair<int, int> airPurifier;
	for (int i=1; i<=row; i++) {
		for (int j=1; j<=col; j++) {
			cin >> field[i][j];
			if (field[i][j] == -1) 
				airPurifier = {airPurifier.second, i};
		}
	}
	
	while (time--) {
		spreadDust(row, col, field);
		cleanAir(row, col, field, airPurifier);
	}

	for (int i=1; i<=row; i++) {
		for (int j=1; j<=col; j++) {
			if (field[i][j] <= 0) continue;
			result += field[i][j];
		}
	}

	cout << result;
}
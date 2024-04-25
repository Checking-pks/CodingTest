#include <iostream>
#include <vector>

using namespace std;

int getPathNum(int row, int column, int initNum) {
	vector<vector<int>> field(row, vector<int> (column, initNum));

	for (int i=1; i<row; i++) 
		for (int j=1; j<column; j++) 
			field[i][j] = field[i-1][j] + field[i][j-1];

	return field.back().back();
}

int main() {
	int row, column, stopover;
	cin >> row >> column >> stopover;

	int stopoverPosY = 0, stopoverPosX = 0;
	if (stopover) {
		stopoverPosY = (stopover - 1) / column;
		stopoverPosX = (stopover - 1) % column;
	}

	cout << getPathNum(
				row - stopoverPosY, 
				column - stopoverPosX, 
				getPathNum(
					stopoverPosY + 1, 
					stopoverPosX + 1, 
					1)
			);
}
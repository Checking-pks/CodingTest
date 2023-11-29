#include <iostream>
#include <vector>

using namespace std;

int main() {
	int row, col;
	cin >> row >> col;

	vector<vector<int>> field(row+1, vector<int>(col+1, 0));

	for (int i=1; i<=row; i++) 
		for (int j=1; j<=col; j++) 
			cin >> field[i][j];

	for (int i=1; i<=row; i++) {
		for (int j=1; j<=col; j++) {
			field[i][j] += max(field[i-1][j-1], max(field[i-1][j], field[i][j-1]));
		}
	}

	cout << field[row][col];
}
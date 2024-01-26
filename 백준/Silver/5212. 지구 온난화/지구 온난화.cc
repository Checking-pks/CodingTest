#include <iostream>
#include <vector>

using namespace std;

int main() {
	int R, C;
	cin >> R >> C;

	vector<vector<bool>> field(R+2, vector<bool>(C+2, true));
	for (int i=1; i<=R; i++) {
		string line;
		cin >> line;

		for (int j=1; j<=C; j++) 
			field[i][j] = (line[j-1] != 'X');
	}
	
	vector<vector<bool>> after50Years = field;
	for (int i=1; i<=R; i++) {
		for (int j=1; j<=C; j++) {
			if (field[i][j]) continue;
			
			int nearSeaCount = 0;
			nearSeaCount += field[i+1][j];
			nearSeaCount += field[i-1][j];
			nearSeaCount += field[i][j+1];
			nearSeaCount += field[i][j-1];

			if (nearSeaCount > 2)
				after50Years[i][j] = true;
		}
	}

	int startRow=1, endRow=R, startCol=1, endCol=C;
	bool reduce_SR=true, reduce_ER=true, reduce_SC=true, reduce_EC=true;

	while (reduce_SR || reduce_ER || reduce_SC || reduce_EC) {

		for (int i=1; (reduce_SC || reduce_EC) && i<=R; i++) {
			if (!after50Years[i][startCol]) 
				reduce_SC = false;
			if (!after50Years[i][endCol])
				reduce_EC = false;
		}
		
		for (int i=1; (reduce_SR || reduce_ER) && i<=C; i++) {
			if (!after50Years[startRow][i]) 
				reduce_SR = false;
			if (!after50Years[endRow][i])
				reduce_ER = false;
		}
		
		if (reduce_SC) startCol++;
		if (reduce_EC) endCol--;
		if (reduce_SR) startRow++;
		if (reduce_ER) endRow--;
	}

	for (int i=startRow; i<=endRow; i++) {
		for (int j=startCol; j<=endCol; j++) {
			cout << (after50Years[i][j] ? '.' : 'X');
		}
		cout << "\n";
	}
}
#include <iostream>
#include <vector>

using namespace std;

void DFS(vector<string> & field, vector<vector<bool>> & alreadyVisit, int & result, int x, int y) {
	if (alreadyVisit[x][y]) return;
	alreadyVisit[x][y] = true;

	if (field[x][y] == 'X') return;
	else if (field[x][y] == 'P') result++;

	DFS(field, alreadyVisit, result, x-1, y);
	DFS(field, alreadyVisit, result, x+1, y);
	DFS(field, alreadyVisit, result, x, y-1);
	DFS(field, alreadyVisit, result, x, y+1);
}

int main() {
	int r, c;
	cin >> r >> c;

	int xPos = -1, yPos = -1, result = 0;
	vector<string> field(r+2, string(c+2, 'X'));
	vector<vector<bool>> alreadyVisit(r+2, vector<bool>(c+2, false));

	for (int i=1; i<=r; i++) {
		cin >> field[i];
		field[i] = "X" + field[i] + "X";

		for (int j=1; xPos == -1 && j<=c; j++) {
			if (field[i][j] == 'I') {
				xPos = i;
				yPos = j;
			}
		}
	}

	DFS(field, alreadyVisit, result, xPos, yPos);

	if (result) cout << result;
	else cout << "TT";
}
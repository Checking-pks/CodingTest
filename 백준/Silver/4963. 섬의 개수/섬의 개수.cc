#include <iostream>
#include <vector>

using namespace std;

void checkIsland(vector<vector<int>> & field, vector<vector<bool>> & alreadyVisit, int x, int y) {
	if (alreadyVisit[x][y]) return;
	if (!field[x][y]) return;
	
	alreadyVisit[x][y] = true;
	checkIsland(field, alreadyVisit, x+1, y);
	checkIsland(field, alreadyVisit, x-1, y);
	checkIsland(field, alreadyVisit, x, y+1);
	checkIsland(field, alreadyVisit, x, y-1);
	checkIsland(field, alreadyVisit, x-1, y-1);
	checkIsland(field, alreadyVisit, x-1, y+1);
	checkIsland(field, alreadyVisit, x+1, y-1);
	checkIsland(field, alreadyVisit, x+1, y+1);
}

int main() {
	int r, c;
	cin >> c >> r;

	while (r != 0 && c != 0) {
		int result = 0;
		vector<vector<int>> field(r+2, vector<int> (c+2, 0));
		vector<vector<bool>> alreadyVisit(r+2, vector<bool> (c+2, false));

		for (int i=1; i<field.size()-1; i++) {
			for (int j=1; j<field[i].size()-1; j++) {
				cin >> field[i][j];
			}
		}

		for (int i=1; i<field.size()-1; i++) {
			for (int j=1; j<field[i].size()-1; j++) {
				if (!field[i][j]) continue;
				if (alreadyVisit[i][j]) continue;

				result++;
				checkIsland(field, alreadyVisit, i, j);
			}
		}

		cout << result << "\n";
		cin >> c >> r;
	}
}
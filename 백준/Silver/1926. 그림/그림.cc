#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> field;
vector<vector<bool>> alreadyVisit;

void setField(int x, int y, int& now) {
	if (field[x][y] == 0) return;
	if (alreadyVisit[x][y]) return;

	alreadyVisit[x][y] = true;
	
	now++;

	setField(x+1, y, now);
	setField(x-1, y, now);
	setField(x, y+1, now);
	setField(x, y-1, now);
}

int main() {
	int r, c;
	cin >> r >> c;
	
	field = vector<vector<int>>(r+2, vector<int>(c+2, 0));
	alreadyVisit = vector<vector<bool>>(r+2, vector<bool>(c+2, false));
	
	for (int i=1; i<=r; i++) 
		for (int j=1; j<=c; j++) 
			cin >> field[i][j];

	int count = 0, maxSize = 0;

	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (alreadyVisit[i][j]) continue;
			if (field[i][j] == 0) continue;
			
			count++;
			
			int now = 0;
			setField(i, j, now);
			maxSize = max(maxSize, now);
		}
	}

	cout << count << "\n" << maxSize;
}
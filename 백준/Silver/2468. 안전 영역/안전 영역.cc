#include <iostream>
#include <vector>

using namespace std;

void submerge(vector<vector<int>> & field, int height) {
	for (int i=1; i<field.size()-1; i++) 
		for (int j=1; j<field.size()-1; j++) 
			if (height == field[i][j]) 
				field[i][j] = 0;
}

void checkIsland(vector<vector<int>> & field, vector<vector<bool>> & alreadyVisit, pair<int, int> pos) {
	if (field[pos.first][pos.second] == 0) return;
	if (alreadyVisit[pos.first][pos.second]) return;
	alreadyVisit[pos.first][pos.second] = true;

	checkIsland(field, alreadyVisit, {pos.first+1, pos.second});
	checkIsland(field, alreadyVisit, {pos.first-1, pos.second});
	checkIsland(field, alreadyVisit, {pos.first, pos.second+1});
	checkIsland(field, alreadyVisit, {pos.first, pos.second-1});
}

int main() {
	int n, maxHeight=0, result=1;
	cin >> n;
	vector<vector<int>> field(n+2, vector<int>(n+2, 0));

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			cin >> field[i][j];
			maxHeight = max(maxHeight, field[i][j]);
		}
	}

	for (int i=1; i<maxHeight; i++) {
		submerge(field, i);

		int now = 0;
		vector<vector<bool>> alreadyVisit(n+2, vector<bool>(n+2, false));
		
		for (int j=1; j<=n; j++) {
			for (int k=1; k<=n; k++) {
				if (alreadyVisit[j][k]) continue;
				if (field[j][k] == 0) continue;

				now++;
				checkIsland(field, alreadyVisit, {j, k});
			}
		}

		result = max(result, now);
	}

	cout << result;
}
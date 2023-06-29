#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	
	int xPos, yPos;
	vector<vector<int>> field(r+2, vector<int>(c+2, 0));
	vector<vector<int>> result(r+2, vector<int>(c+2, -1));
	vector<vector<bool>> alreadyVisit(r+2, vector<bool>(c+2, false));
	queue<vector<int>> bucket;

	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			cin >> field[i][j];

			if (field[i][j] == 2) {
				xPos = i;
				yPos = j;
			}
		}
	}

	bucket.push({xPos, yPos, 0});

	while (bucket.size()) {
		vector<int> nowPos = bucket.front();
		bucket.pop();

		if (alreadyVisit[nowPos[0]][nowPos[1]]) continue;
		alreadyVisit[nowPos[0]][nowPos[1]] = true;

		if (field[nowPos[0]][nowPos[1]] == 0) {
			result[nowPos[0]][nowPos[1]] = 0;
			continue;
		}

		result[nowPos[0]][nowPos[1]] = nowPos[2];

		bucket.push({nowPos[0]-1, nowPos[1], nowPos[2] + 1});
		bucket.push({nowPos[0]+1, nowPos[1], nowPos[2] + 1});
		bucket.push({nowPos[0], nowPos[1]-1, nowPos[2] + 1});
		bucket.push({nowPos[0], nowPos[1]+1, nowPos[2] + 1});
	}

	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (field[i][j]) cout << result[i][j] << " ";
			else cout << 0 << " ";
		}
		cout << "\n";
	}
}
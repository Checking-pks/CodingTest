#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class info{
public:
	int xPos, yPos;
	bool breakWall = false;
	int time = 0;
};

int main() {
	int row, col;
	cin >> row >> col;

	vector<pair<int, int>> move = {
		{1, 0}, {0, 1}, {-1, 0}, {0, -1}
	};
	vector<vector<bool>> field(row+4, vector<bool>(col+4, true));

	for (int i=0; i<row; i++) {
		string s;
		cin >> s;
		for (int j=0; j<col; j++) 
			field[i+2][j+2] = (s[j] == '1');
	}

	vector<vector<pair<bool, bool>>> alreadyVisit(row+4, vector<pair<bool, bool>>(col+4, {false, false}));
	queue<info> bucket;
	bucket.push({2, 2, false, 1});

	while (bucket.size()) {
		info now = bucket.front();
		if (now.xPos == row+1 && now.yPos == col+1) break;
		bucket.pop();

		for (int i=0; i<move.size(); i++) {
			info newInfo = now;
			newInfo.xPos += move[i].first;
			newInfo.yPos += move[i].second;

			if (now.breakWall && field[newInfo.xPos][newInfo.yPos]) continue;
			newInfo.breakWall += field[newInfo.xPos][newInfo.yPos];

			if (newInfo.breakWall) {
				if (alreadyVisit[newInfo.xPos][newInfo.yPos].first) continue;
				alreadyVisit[newInfo.xPos][newInfo.yPos].first = true;
			} else {
				if (alreadyVisit[newInfo.xPos][newInfo.yPos].second) continue;
				alreadyVisit[newInfo.xPos][newInfo.yPos].second = true;
			}
			newInfo.time++;

			bucket.push(newInfo);
		}
	}

	if (bucket.size()) cout << bucket.front().time;
	else cout << -1;
}
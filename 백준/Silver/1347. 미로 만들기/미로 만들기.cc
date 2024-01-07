#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> moveList = {
	{1, 0}, {0, -1}, {-1, 0}, {0, 1}
};

int main() {
	int n;
	string s;
	cin >> n >> s;

	vector<string> field(2*n+1, string(2*n+1, '#'));
	pair<int, int> pos, minPos, maxPos;
	int direction = 0;
	pos = minPos = maxPos = {n, n};
	field[n][n] = '.';

	for (int i=0; i<s.length(); i++) {
		if (s[i] == 'L' || s[i] == 'R') {
			direction += (s[i] == 'L' ? -1 : 1);
			direction += moveList.size();
			direction %= moveList.size();
			continue;
		}
		
		int xPos = pos.first + moveList[direction].first;
		int yPos = pos.second + moveList[direction].second;

		field[xPos][yPos] = '.';

		pos = {xPos, yPos};
		minPos = {min(minPos.first, xPos), min(minPos.second, yPos)};
		maxPos = {max(maxPos.first, xPos), max(maxPos.second, yPos)};
	}

	for (int i=minPos.first; i<=maxPos.first; i++) {
		for (int j=minPos.second; j<=maxPos.second; j++) {
			cout << field[i][j];
		}
		cout << "\n";
	}
}
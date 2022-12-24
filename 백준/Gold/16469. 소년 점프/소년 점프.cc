#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

vector<vector<int>> doSimulate(vector<string> field, pair<int, int> pos) {
	vector<vector<bool>> alreadyVisit(field.size(), vector<bool> (field.front().length(), false));
	vector<vector<int>> result(field.size(), vector<int> (field.front().length(), -20001));

	list<vector<int>> bucket = {{0, pos.first, pos.second}};

	while (bucket.size()) {
		vector<int> nowPos = bucket.front();
		bucket.pop_front();

		if (field[nowPos[1]][nowPos[2]] == '1' || (result[nowPos[1]][nowPos[2]] >= 0 && result[nowPos[1]][nowPos[2]] <= nowPos[0])) continue;

		result[nowPos[1]][nowPos[2]] = nowPos[0];
		
		bucket.push_back({nowPos[0] + 1, nowPos[1] - 1, nowPos[2]});
		bucket.push_back({nowPos[0] + 1, nowPos[1] + 1, nowPos[2]});
		bucket.push_back({nowPos[0] + 1, nowPos[1], nowPos[2] - 1});
		bucket.push_back({nowPos[0] + 1, nowPos[1], nowPos[2] + 1});
	}

	return result;
}

int main() {
	vector<string> field;
	vector<pair<int, int>> villainPos;
	vector<vector<vector<int>>> distanceField;
	int n, m;
	int minTime = 10001, minSpot = 0; 

	// input	: row and column
	cin >> n >> m;

	// input	: make a field
	string topAndBottom = "";

	for (int i=0; i<m+2; i++) topAndBottom += "1";
	
	field.push_back(topAndBottom);
	
	for (int i=0; i<n; i++) {
		string row;
		cin >> row;
		field.push_back("1" + row + "1");
	}

	field.push_back(topAndBottom);

	// input	: villain position
	for (int i=0; i<3; i++) {
		int x, y;
		cin >> x >> y;
		villainPos.push_back({x, y});
	}

	// simulate	: do simulate three villain
	for (int i=0; i<villainPos.size(); i++) {
		distanceField.push_back(doSimulate(field, villainPos[i]));
	}

	// data preprocessing
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (distanceField[0][i][j] + distanceField[1][i][j] + distanceField[2][i][j] < 0) continue;
			
			int nowDis = 0;
			
			if (nowDis < distanceField[0][i][j]) nowDis = distanceField[0][i][j];
			if (nowDis < distanceField[1][i][j]) nowDis = distanceField[1][i][j];
			if (nowDis < distanceField[2][i][j]) nowDis = distanceField[2][i][j];

			if (minTime > nowDis) {
				minTime = nowDis;
				minSpot = 1;
			} else if (minTime == nowDis) {
				minSpot++;
			}
		}
	}

	// output	: result
	if (minTime == 10001) cout << "-1";
	else cout << minTime << "\n" << minSpot;
}
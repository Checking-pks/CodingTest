#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, result = 10000;
	cin >> n >> m;

	vector<pair<int, int>> chickenList, homeList;
	for (int i=0; i<n; i++) {
		for (int j=0, now; j<n; j++) {
			cin >> now;
			if (now == 2) chickenList.push_back({i, j});
			if (now == 1) homeList.push_back({i, j});
		}
	}

	vector<vector<int>> chickenDistance(homeList.size(), vector<int>(chickenList.size()));

	for (int i=0; i<chickenDistance.size(); i++) {
		for (int j=0; j<chickenDistance[i].size(); j++) {
			int xDis = homeList[i].first - chickenList[j].first;
			int yDis = homeList[i].second - chickenList[j].second;
			chickenDistance[i][j] = abs(xDis) + abs(yDis);
		}
	}

	vector<bool> choiceList(chickenList.size());
	for (int i=0; i<m; i++)	choiceList[i] = true;

	do {
		int nowResult = 0;
		for (int i=0; i<chickenDistance.size(); i++) {
			int nowMin = 100;
			for (int j=0; j<chickenDistance[i].size(); j++) {
				if (!choiceList[j]) continue;
				nowMin = min(nowMin, chickenDistance[i][j]);
			}
			nowResult += nowMin;
		}
		result = min(result, nowResult);
	} while (prev_permutation(choiceList.begin(), choiceList.end()));

	cout << result;
}
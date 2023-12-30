#include <iostream>
#include <vector>

using namespace std;

const int INF = 1501;

int main() {
	int areaNum, searchRange, roadNum, result=0;
	cin >> areaNum >> searchRange >> roadNum;

	vector<int> itemList(areaNum+1);
	for (int i=1; i<=areaNum; i++)
		cin >> itemList[i];

	vector<vector<int>> distList(areaNum+1, vector<int>(areaNum+1, INF));

	for (int i=0, start, end, distance; i<roadNum; i++) {
		cin >> start >> end >> distance;
		distList[start][end] = distance;
		distList[end][start] = distance;
	}

	for (int k=1; k<=areaNum; k++) {
		for (int i=1; i<=areaNum; i++) {
			for (int j=1; j<=areaNum; j++) {
				if (i==j) distList[i][j] = 0;
				distList[i][j] = min(
					distList[i][j],
					distList[i][k] + distList[k][j]
				);
			}
		}
	}

	for (int i=1; i<=areaNum; i++) {
		int sumItem = 0;
		for (int j=1; j<=areaNum; j++) {
			if (distList[i][j] > searchRange) continue;
			sumItem += itemList[j];
		}
		result = max(result, sumItem);
	}

	cout << result;
}
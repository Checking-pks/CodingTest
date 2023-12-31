#include <iostream>
#include <vector>

using namespace std;

const int INF = 1000001;

int main() {
	int peopleNum, roadNum, target;
	cin >> peopleNum >> roadNum >> target;
	vector<vector<int>> field(peopleNum+1, vector<int>(peopleNum+1, INF));

	for (int i=0, start, end, distance; i<roadNum; i++) {
		cin >> start >> end >> distance;
		field[start][end] = distance;
	}

	for (int i=1; i<=peopleNum; i++)
		field[i][i] = 0;

	for (int k=1; k<=peopleNum; k++) {
		for (int i=1; i<=peopleNum; i++) {
			if (field[i][k] == INF) continue;
			for (int j=1; j<=peopleNum; j++) {
				field[i][j] = min(
					field[i][j],
					field[i][k] + field[k][j]
				);
			}
		}
	}

	int resultDist = 0;

	for (int i=1; i<=peopleNum; i++) {
		int nowDist = field[i][target] + field[target][i];
		resultDist = max(resultDist, nowDist);
	}

	cout << resultDist;
}
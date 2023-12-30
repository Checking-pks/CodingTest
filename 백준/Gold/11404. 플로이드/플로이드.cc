#include <iostream>
#include <vector>

using namespace std;

const int INF = 10000001;

int main() {
	int cityNum, busNum;
	cin >> cityNum >> busNum;

	vector<vector<int>> result(cityNum+1, vector<int>(cityNum+1, INF));

	for (int i=0, start, end, value; i<busNum; i++) {
		cin >> start >> end >> value;
		result[start][end] = min(
			result[start][end],
			value
		);
	}
	
	for (int k=1; k<=cityNum; k++) {
		for (int i=1; i<=cityNum; i++) {
			for (int j=1; j<=cityNum; j++) {
				if (i==j) continue;
				result[i][j] = min(
					result[i][j],
					result[i][k] + result[k][j]
				);
			}
		}
	}

	for (int i=1; i<=cityNum; i++) {
		for (int j=1; j<=cityNum; j++) {
			if (result[i][j] == INF) cout << "0 ";
			else cout << result[i][j] << " ";
		}
		cout << "\n";
	}
}
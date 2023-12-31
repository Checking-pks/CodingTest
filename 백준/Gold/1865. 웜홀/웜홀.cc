#include <iostream>
#include <vector>

using namespace std;

const int INF = 25000001;

int main() {
	int testcase;
	cin >> testcase;

	while(testcase--) {
		int spotNum, roadNum, holeNum;
		cin >> spotNum >> roadNum >> holeNum;

		vector<vector<int>> field(spotNum+1, vector<int>(spotNum+1, INF));

		for (int i=0, start, end, distance; i<roadNum; i++) {
			cin >> start >> end >> distance;
			field[start][end] = min(field[start][end], distance);
			field[end][start] = min(field[end][start], distance);
		}

		for (int i=0, start, end, distance; i<holeNum; i++) {
			cin >> start >> end >> distance;
			field[start][end] = min(field[start][end], -distance);
		}

		for (int k=1; k<=spotNum; k++) {
			for (int i=1; i<=spotNum; i++) {
				for (int j=1; j<=spotNum; j++) {
					field[i][j] = min(field[i][j], field[i][k]+field[k][j]);
				}
			}
		}

		bool result = false;
		for (int i=1; !result && i<=spotNum; i++) {
			for (int j=1; !result && j<=spotNum; j++) {
				result = (field[i][j] + field[j][i] < 0);
			}
		}

		cout << (result ? "YES" : "NO") << "\n";
	}
}
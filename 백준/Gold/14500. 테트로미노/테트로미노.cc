#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, max = 0;
	cin >> n >> m;
	vector<vector<int>> field(n + 6, vector<int>(m + 6, 0));
	vector<vector<pair<int, int>>> tetromino = {
	{{0, 0}, {1, 0}, {0, 1}, {1, 1}}, //O
	{{0, 0}, {0, 1}, {0, 2}, {0, 3}}, {{0, 0}, {1, 0}, {2, 0}, {3, 0}}, // I
	{{0, 0}, {1, 0}, {1, 1}, {2, 1}}, {{1, 0}, {1, 1}, {0, 1}, {0, 2}}, // S
	{{0, 1}, {1, 1}, {1, 0}, {2, 0}}, {{0, 0}, {0, 1}, {1, 1}, {1, 2}}, // Z
	{{0, 0}, {1, 0}, {1, 1}, {2, 0}}, {{0, 1}, {1, 0}, {1, 1}, {1, 2}}, {{0, 1}, {1, 0}, {1, 1}, {2, 1}}, {{0, 0}, {0, 1}, {0, 2}, {1, 1}}, // T
	{{0, 0}, {1, 0}, {2, 0}, {2, 1}}, {{0, 0}, {1, 0}, {0, 1}, {0, 2}}, {{0, 0}, {0, 1}, {1, 1}, {2, 1}}, {{1, 0}, {1, 1}, {1, 2}, {0, 2}}, // J
	{{0, 1}, {1, 1}, {2, 1}, {2, 0}}, {{0, 0}, {0, 1}, {0, 2}, {1, 2}}, {{0, 0}, {1, 0}, {0, 1}, {2, 0}}, {{0, 0}, {1, 0}, {1, 1}, {1, 2}}  // L
	};

	for (int i=3; i<=n+2; i++) {
		for (int j=3; j<=m+2; j++) {
			int num;
			cin >> num;

			field[i][j] = num;
		}
	}

	for (int i=3; i<=n+2; i++) {
		for (int j=3; j<=m+2; j++) {
			for (int k=0; k<tetromino.size(); k++) {
				int nowNum = 0;

				for (int l=0; l<tetromino[k].size(); l++) 
					nowNum += field[i + tetromino[k][l].first][j + tetromino[k][l].second];

				if (max < nowNum)
					max = nowNum;
			}
		}
	}

	cout << max;
}
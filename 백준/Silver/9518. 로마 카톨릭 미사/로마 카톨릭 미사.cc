#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> checkList = {{0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}};

int main() {
	int R, S, sum = 0, result = 0;
	cin >> R >> S;
	
	vector<vector<bool>> field(R+2, vector<bool>(S+2));
	for (int i=1; i<=R; i++) {
		string line;
		cin >> line;

		for (int j=0; j<S; j++) {
			if (line[j] == 'o') {
				field[i][j+1] = true;
			}
		}
	}

	for (int i=1; i<=R; i++) {
		for (int j=1; j<=S; j++) {
			int now = 0;
			if (field[i][j]) {
				for (int k=0, x, y; k<4; k++) {
					x = i + checkList[k].first;
					y = j + checkList[k].second;
					now += field[x][y];
				}
				sum += now;
			} else {
				for (int k=0, x, y; k<8; k++) {
					x = i + checkList[k].first;
					y = j + checkList[k].second;
					now += field[x][y];
				}
				result = max(result, now);
			}
		}
	}

	cout << sum + result;
}
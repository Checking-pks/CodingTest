#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field, result;
vector<vector<int>> movePos = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void check(int x, int y) {
	field[x][y]++;

	for (int i=1; true; i++) {
		bool isCross = true;

		for (int j=0, nextX, nextY; j<movePos.size(); j++) {
			nextX = x + movePos[j][0] * i;
			nextY = y + movePos[j][1] * i;

			if (field[nextX][nextY] <= 0) {
				isCross = false;

				for (int k=0; k<j; k++) {
					nextX = x + movePos[k][0] * i;
					nextY = y + movePos[k][1] * i;
					field[nextX][nextY]--;
				}
				break;
			}
			
			field[nextX][nextY]++;
		}

		if (!isCross) {
			if (i > 1)
				result.push_back({x, y, i - 1});
			else
				field[x][y]--;
			
			break;
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	field = vector<vector<int>>(N+2, vector<int>(M+2));

	for (int i=1; i<=N; i++) {
		string s;
		cin >> s;
		
		for (int j=1; j<=M; j++) 
			field[i][j] = (s[j-1] == '*');
	}

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			if (field[i][j] <= 0)
				continue;
			
			check(i, j);
		}
	}

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			if (field[i][j] == 1) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << result.size() << "\n";
	for (int i=0; i<result.size(); i++)
		cout << result[i][0] << " "
			<< result[i][1] << " "
			<< result[i][2] << "\n";
}
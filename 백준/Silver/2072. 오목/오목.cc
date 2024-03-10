#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field(21, vector<int>(21));
vector<vector<int>> moveList = {
	{1, 0}, {-1, 0}, {0, 1}, {0, -1},
	{1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

bool check(int x, int y) {
	int color = field[x][y];

	for (int i=0; i<moveList.size(); i+=2) {
		int count = 1;
		for (int j=0; j<2; j++) {
			for (int k=1; k<=5; k++) {
				int nowX = x + k * moveList[i+j][0];
				int nowY = y + k * moveList[i+j][1];
				int nowColor = field[nowX][nowY];

				if (nowColor != color) break;
				count++;
			}
		}
		if (count == 5) return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin >> N;

	for (int i=1, x, y; i<=N; i++) {
		cin >> x >> y;

		field[x][y] = (i & 1) + 1;

		if (check(x, y)) {
			cout << i;
			return 0;
		}
	}

	cout << -1;
}
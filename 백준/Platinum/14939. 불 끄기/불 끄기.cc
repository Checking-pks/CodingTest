#include <iostream>
#include <vector>

using namespace std;

const int INF = 10001;
vector<vector<bool>> field(10, vector<bool>(10));
vector<vector<bool>> nowField;

vector<int> dx = {0, 1, -1, 0, 0};
vector<int> dy = {0, 0, 0, 1, -1};

void input() {
	for (int i=0; i<10; i++) {
		string s;
		cin >> s;

		for (int j=0; j<10; j++) 
			field[i][j] = (s[j] == 'O');
	}
}

void click(int x, int y) {
	for (int i = 0, nowX, nowY; i < 5; i++) {
		nowX = x + dx[i];
		nowY = y + dy[i];

		if (nowX < 0 || nowX >= 10) continue;
		if (nowY < 0 || nowY >= 10) continue;

		nowField[nowX][nowY] = !nowField[nowX][nowY];
	}
}

bool isAllOff() {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (nowField[i][j])
				return false;

	return true;
}

void solve() {
	int result = INF;
	for (int step = 0; step < (1 << 10); step++) {
		int clickCount = 0;
		nowField = field;

		for (int i = 0; i < 10; i++) {
			if (step & (1 << i)) {
				clickCount++;
				click(0, i);
			}
		}

		for (int i = 1; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (!nowField[i-1][j]) continue;

				click(i, j);
				clickCount++;
			}
		}

		if (isAllOff())
			result = min(result, clickCount);
	}

	if (result == INF)
		cout << -1;
	else
		cout << result;
}

int main() {
	input();
	solve();
}
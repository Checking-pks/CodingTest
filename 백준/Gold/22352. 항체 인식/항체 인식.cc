#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> before, after;

void change(int x, int y, int beforeNum, int afterNum) {
	if (x < 0 || x >= N)
		return;
	if (y < 0 || y >= M)
		return;
	if (before[x][y] != beforeNum)
		return;

	before[x][y] = afterNum;

	change(x + 1, y, beforeNum, afterNum);
	change(x - 1, y, beforeNum, afterNum);
	change(x, y + 1, beforeNum, afterNum);
	change(x, y - 1, beforeNum, afterNum);
}

bool check() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (before[i][j] == after[i][j])
				continue;

			change(i, j, before[i][j], after[i][j]);
			return (before == after);
		}
	}

	return true;
}

int main() {
	cin >> N >> M;

	before = vector<vector<int>>(N, vector<int>(M));
	after = vector<vector<int>>(N, vector<int>(M));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> before[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> after[i][j];

	cout << (check() ? "YES" : "NO");
}
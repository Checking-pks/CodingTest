#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> moveList = {{-1, -2}, {-2, -1}, {1, -2}, {2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}};

void checkCount(int x, int y, char t, vector<string> &r) {
	if (x < 0 || x > 3)
		return;
	if (y < 0 || y > 3)
		return;
	if (r[x][y] <= t)
		return;

	r[x][y] = t;

	for (int i = 0; i < moveList.size(); i++)
		checkCount(x + moveList[i].first, y + moveList[i].second, t + 1, r);
}

vector<string> getCount(int x, int y) {
	vector<string> result(4, "6666");
	checkCount(x, y, '0', result);
	return result;
}

int main() {
	vector<string> before(4), after(4);

	int result = 100;
	vector<vector<string>> beforeList;
	vector<pair<int, int>> afterList;

	for (int i = 0; i < 4; i++)
		cin >> before[i];
	for (int i = 0; i < 4; i++)
		cin >> after[i];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (before[i][j] == '1' && after[i][j] == '0')
				beforeList.push_back(getCount(i, j));

			if (before[i][j] == '0' && after[i][j] == '1')
				afterList.push_back({i, j});
		}
	}

	sort(afterList.begin(), afterList.end());

	do {
		int nowTime = 0;
		for (int i = 0, x, y; i < afterList.size(); i++) {
			x = afterList[i].first;
			y = afterList[i].second;

			nowTime += beforeList[i][x][y] - '0';
		}

		result = min(result, nowTime);
	} while (next_permutation(afterList.begin(), afterList.end()));

	cout << result;
}
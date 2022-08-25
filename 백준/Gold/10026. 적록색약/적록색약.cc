#include <iostream>
#include <vector>
#include <string>

using namespace std;

void eraserField(vector<vector<char>> & field, pair<int, int> pos, char type) {
	if (field[pos.first][pos.second] != type)
		return;
	
	field[pos.first][pos.second] = '0';
	
	eraserField(field, {pos.first + 1, pos.second}, type);
	eraserField(field, {pos.first - 1, pos.second}, type);
	eraserField(field, {pos.first, pos.second + 1}, type);
	eraserField(field, {pos.first, pos.second - 1}, type);
}

int main() {
	int n;
	cin >> n;

	vector<vector<char>> field1(n + 2, vector<char>(n + 2, '0'));
	vector<vector<char>> field2(n + 2, vector<char>(n + 2, '0'));
	pair<int ,int> result = {0, 0};

	for (int i=1; i<=n; i++) {
		string nowStr;
		cin >> nowStr;

		for (int j=1; j<=n; j++) {
			field1[i][j] = nowStr[j-1];
			field2[i][j] = (nowStr[j-1] != 'G') ? nowStr[j-1] : 'R';
		}
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (field1[i][j] != '0') {
				result.first++;
				eraserField(field1, {i, j}, field1[i][j]);
			}

			if (field2[i][j] != '0') {
				result.second++;
				eraserField(field2, {i, j}, field2[i][j]);
			}
		}
	}

	cout << result.first << " " << result.second;
}
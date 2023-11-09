#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<vector<int>> field;
set<string> result;

void dfs(pair<int, int> pos, string num) {
	if (field[pos.first][pos.second] == -1) return;

	num += field[pos.first][pos.second] + '0';
	
	if (num.length() == 6) {
		result.insert(num);
		return;
	}

	dfs({pos.first+1, pos.second}, num);
	dfs({pos.first-1, pos.second}, num);
	dfs({pos.first, pos.second+1}, num);
	dfs({pos.first, pos.second-1}, num);
}

int main() {
	field = vector<vector<int>>(7, vector<int>(7, -1));
	for (int i=1; i<=5; i++)
		for (int j=1; j<=5; j++)
			cin >> field[i][j];

	for (int i=1; i<=5; i++)
		for (int j=1; j<=5; j++)
			dfs({i, j}, "");

	cout << result.size();
}
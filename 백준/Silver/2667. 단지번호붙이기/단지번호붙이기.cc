#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

void findHouse(vector<vector<int>>& field, list<int>& result, pair<int, int> pos) {
	if (field[pos.first][pos.second] == 0)
		return;

	field[pos.first][pos.second] = 0;
	result.back()++;

	findHouse(field, result, {pos.first + 1, pos.second});
	findHouse(field, result, {pos.first - 1, pos.second});
	findHouse(field, result, {pos.first, pos.second + 1});
	findHouse(field, result, {pos.first, pos.second - 1});
}

int main() {
	int n;
	cin >> n;

	vector<vector<int>> field(n + 2, vector<int>(n + 2));
	list<int> result;

	for (int i=1; i<=n; i++) {
		string line;
		cin >> line;

		for (int j=1; j<=n; j++) {
			field[i][j] = line[j - 1] - '0';
		}
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (field[i][j]) {
				result.push_back(0);
				findHouse(field, result, {i, j});
			}
		}
	}

	result.sort();

	cout << result.size() << "\n";

	for (int n:result)
		cout << n << "\n";
	
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int simulate(vector<vector<int>> field, vector<pair<int, int>> virusList) {
	int now = 0;

	while (virusList.size()) {
		pair<int, int> now = virusList.back();
		virusList.pop_back();
		if (field[now.first][now.second] == 1) continue;
		field[now.first][now.second] = 1;
		virusList.push_back({now.first+1, now.second});
		virusList.push_back({now.first-1, now.second});
		virusList.push_back({now.first, now.second+1});
		virusList.push_back({now.first, now.second-1});
	}

	for (int i=0; i<field.size(); i++) {
		for (int j=0; j<field[i].size(); j++) {
			if (field[i][j] == 0)
				now++;
		}
	}

	return now;
}

int main() {
	int n, m, result = 0;
	cin >> n >> m;

	vector<vector<int>> field(n+2, vector<int>(m+2, 1));
	vector<pair<int, int>> virusList, emptyList;
	vector<bool> permutationList;
	
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cin >> field[i][j];
			if (field[i][j] == 2) virusList.push_back({i, j});
			if (field[i][j] == 0) emptyList.push_back({i, j});
		}
	}

	permutationList = vector<bool>(emptyList.size());
	for (int i=0; i<3; i++) permutationList[i] = true;

	do {
		for (int i=0; i<permutationList.size(); i++) {
			if (!permutationList[i]) continue;
			field[emptyList[i].first][emptyList[i].second] = true;
		}

		result = max(result, simulate(field, virusList));

		for (int i=0; i<permutationList.size(); i++) {
			if (!permutationList[i]) continue;
			field[emptyList[i].first][emptyList[i].second] = false;
		}
	} while (prev_permutation(permutationList.begin(), permutationList.end()));

	cout << result;
}
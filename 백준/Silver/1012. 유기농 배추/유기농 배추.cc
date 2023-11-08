#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<bool>> & field, pair<int, int> pos) {
	if (field[pos.first][pos.second] == 0) return;
	
	field[pos.first][pos.second] = false;
	
	dfs(field, {pos.first+1, pos.second});
	dfs(field, {pos.first-1, pos.second});
	dfs(field, {pos.first, pos.second+1});
	dfs(field, {pos.first, pos.second-1});
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int m, n, k, result=0;
		cin >> m >> n >> k;
		
		vector<vector<bool>> field(m+2, vector<bool>(n+2, false));
		for (int i=0, x, y; i<k; i++) {
			cin >> x >> y;
			field[++x][++y] = 1;
		}

		for (int i=1; i<=m; i++) {
			for (int j=1; j<=n; j++) {
				if (field[i][j]) {
					result++;
					dfs(field, {i, j});
				}
			}
		}

		cout << result << "\n";
	}
}
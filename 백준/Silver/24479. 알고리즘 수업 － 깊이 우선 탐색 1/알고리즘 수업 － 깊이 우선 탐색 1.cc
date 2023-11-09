#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> field;
vector<int> result;
int times = 1;

void dfs(int target) {
	if (result[target]) return;
	result[target] = times++;

	for (int i=0; i<field[target].size(); i++)
		dfs(field[target][i]);
}

int main() {
	int n, m, r;
	cin >> n >> m >> r;

	field = vector<vector<int>>(n+1, vector<int>());
	result = vector<int>(n+1, 0);
	
	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;
		field[a].push_back(b);
		field[b].push_back(a);
	}

	for (int i=1; i<=n; i++) {
		sort(field[i].begin(), field[i].end());
	}

	dfs(r);

	for (int i=1; i<result.size(); i++) {
		cout << result[i] << "\n";
	}
}
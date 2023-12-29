#include <iostream>
#include <vector>

using namespace std;

const int INF = 100000001;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, e;
	cin >> n >> e;
	vector<vector<int>> field(n+1, vector<int>(n+1, INF));

	for (int i=0, a, b, value; i<e; i++) {
		cin >> a >> b >> value;
		field[a][b] = value;
		field[b][a] = value;
	}
	
	int v1, v2;
	cin >> v1 >> v2;

	for (int k=1; k<=n; k++) {
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				field[i][j] = min(
					field[i][j],
					field[i][k] + field[k][j]
				);
			}
		}
	}

	int result = INF;

	result = min(result, field[1][v1] + field[v1][v2] + field[v2][n]);
	result = min(result, field[1][v2] + field[v2][v1] + field[v1][n]);

	if (1 == v1 || v1 == n) result = min(result, field[1][v2] + field[v2][n]);
	if (1 == v2 || v2 == n) result = min(result, field[1][v1] + field[v1][n]);
	
	if (1 == v1 && v2 == n) result = min(result, field[1][n]);
	if (1 == v2 && v1 == n) result = min(result, field[1][n]);

	if (result < INF) cout << result;
	else cout << -1;
}
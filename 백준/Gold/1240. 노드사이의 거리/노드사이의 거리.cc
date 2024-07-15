#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	cin >> N >> M;

	vector<vector<int>> field(N + 1, vector<int>(N + 1, 1'000'000'000));

	for (int i=1, a, b, p; i<N; i++) {
		cin >> a >> b >> p;
		field[a][b] = p;
		field[b][a] = p;
	}

	for (int k=1; k<=N; k++) {
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (i==j) continue;
				field[i][j] = min(field[i][j], field[i][k] + field[k][j]);
			}
		}
	}

	for (int i=0, a, b; i<M; i++) {
		cin >> a >> b;
		cout << field[a][b] << "\n";
	}
}
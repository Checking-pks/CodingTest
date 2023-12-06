#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;

	vector<vector<long long>> field(N+1, vector<long long>(M+1));
	map<vector<int>, bool> construction;

	for (int i=0, x1, y1, x2, y2; i<K; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 > x2 || y1 > y2) {
			swap(x1, x2);
			swap(y1, y2);
		}

		construction[{x1, y1, x2, y2}] = true;
	}

	for (int i=0; i<=N; i++) {
		if (construction[{i-1, 0, i, 0}]) break;
		field[i][0] = 1;
	}
	for (int i=0; i<=M; i++) {
		if (construction[{0, i-1, 0, i}]) break;
		field[0][i] = 1;
	}

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			field[i][j] = (
				(construction[{{i-1, j, i, j}}] ? 0 : field[i-1][j]) +
				(construction[{{i, j-1, i, j}}] ? 0 : field[i][j-1])
			);
		}
	}

	cout << field[N][M];
}
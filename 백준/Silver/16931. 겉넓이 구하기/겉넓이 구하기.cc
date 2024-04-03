#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M, result=0;
	cin >> N >> M;

	vector<vector<int>> field(N+1, vector<int>(M+1));
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			cin >> field[i][j];
			result += abs(field[i][j] - field[i-1][j]);
			result += abs(field[i][j] - field[i][j-1]);
		}
	}

	for (int i=1; i<=N; i++) 
		result += field[i][M];
	for (int i=1; i<=M; i++) 
		result += field[N][i];

	result += 2*N*M;

	cout << result;
}
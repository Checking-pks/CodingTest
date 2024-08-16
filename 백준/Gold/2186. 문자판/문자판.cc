#include <iostream>
#include <vector>

using namespace std;

int N, M, K;
string target;
vector<string> field;
vector<vector<vector<int>>> countList;

int main() {
	cin >> N >> M >> K;

	field = vector<string>(N);
	for (int i = 0; i < N; i++)
		cin >> field[i];

	cin >> target;

	countList = vector<vector<vector<int>>>(N, vector<vector<int>>(M, vector<int>(target.length(), 0)));

	for (int pos = 0; pos < target.length(); pos++) {
		for (int x = 0; x < N; x++) {
			for (int y = 0; y < M; y++) {
				if (field[x][y] != target[pos])
					continue;

				if (!pos)
					countList[x][y][pos] = 1;

				for (int i = -K; i <= K; i++) {
					if (!i) continue;

					int newX = x + i, newY = y + i;
					if (0 <= newX && newX < N) {
						if (field[newX][y] == target[pos + 1]) {
							countList[newX][y][pos + 1] += countList[x][y][pos];
						}
					}

					if (0 <= newY && newY < M) {
						if (field[x][newY] == target[pos + 1]) {
							countList[x][newY][pos + 1] += countList[x][y][pos];
						}
					}
				}
			}
		}
	}
	
	int result = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			result += countList[i][j].back();

	cout << result;
}
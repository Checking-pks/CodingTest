#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> moveOdd = {
	{1, 1}, {1, 0}, {0, 1}, {-1, 1}, {0, -1}, {-1, 0}
};

vector<vector<int>> moveEven = {
	{1, 0}, {1, -1}, {0, 1}, {-1, 0}, {0, -1}, {-1, -1}
};

int main() {
	int N, M, K;
	cin >> N >> M >> K;

	vector<vector<int>> field(N, vector<int>(M));
	for (int i=0, x, y; i<K; i++) {
		cin >> x >> y;
		field[x][y] = -1;
	}

	queue<vector<int>> bucket;
	bucket.push({0, 0, 1});
	while (bucket.size()) {
		int x = bucket.front()[0];
		int y = bucket.front()[1];
		int t = bucket.front()[2];
		bucket.pop();
		
		for (int i=0; i<6; i++) {
			int nextX = x + (x&1 ? moveOdd[i][0] : moveEven[i][0]);
			int nextY = y + (x&1 ? moveOdd[i][1] : moveEven[i][1]);

			if (nextX < 0 || nextX >= N) continue;
			if (nextY < 0 || nextY >= M) continue;
			if (field[nextX][nextY]) continue;
			field[nextX][nextY] = t+1;

			if (nextX == N-1 && nextY == M-1) {
				cout << t;
				return 0;
			}
			
			bucket.push({nextX, nextY, t+1});
		}
	}

	cout << -1;
}
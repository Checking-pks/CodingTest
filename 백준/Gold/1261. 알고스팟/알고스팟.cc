#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, M;
	cin >> M >> N;
	vector<vector<bool>> field(N, vector<bool>(M));
	vector<vector<int>> alreadyVisit(N, vector<int>(M, 10001));

	for (int i=0; i<N; i++) {
		string s;
		cin >> s;
		for (int j=0; j<M; j++) {
			field[i][j] = (s[j] == '1');
		}
	}

	queue<pair<pair<int, int>, int>> bucket;
	vector<pair<int, int>> move = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	bucket.push({{0, 0}, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		bucket.pop();

		for (int i=0; i<move.size(); i++) {
			int newX = now.first.first + move[i].first;
			int newY = now.first.second + move[i].second;

			if (newX < 0 || newX >= N) continue;
			if (newY < 0 || newY >= M) continue;
			
			int newBreak = now.second + field[newX][newY];
			if (alreadyVisit[newX][newY] <= newBreak) continue;
			alreadyVisit[newX][newY] = newBreak;

			if (now.first.first == N-1 && now.first.second == M-1)
				continue;
			
			bucket.push({{newX, newY}, newBreak});
		}
	}

	if (alreadyVisit[N-1][M-1] == 10001) cout << 0;
	else cout << alreadyVisit[N-1][M-1];
}
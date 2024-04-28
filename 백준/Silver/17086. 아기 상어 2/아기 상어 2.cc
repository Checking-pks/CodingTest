#include <iostream>
#include <set>

using namespace std;

int main() {
	int N, M, result = 0;
	cin >> N >> M;

	set<pair<int, int>> sharkPos;
	for (int i=0; i<N; i++) {
		for (int j=0, now; j<M; j++) {
			cin >> now;

			if (now) 
				sharkPos.insert({i, j});
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (sharkPos.find({i, j}) != sharkPos.end())
				continue;

			int nowMin = 2501;
			for (auto sPos : sharkPos) {
				int xDist = abs(sPos.first - i);
				int yDist = abs(sPos.second - j);
				int nowDist = min(xDist, yDist);
				nowDist += xDist - nowDist + yDist - nowDist;

				nowMin = min(nowMin, nowDist);
			}

			result = max(result, nowMin);
		}
	}

	cout << result;
}
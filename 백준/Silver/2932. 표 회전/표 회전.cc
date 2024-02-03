#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	map<int, pair<int, int>> field;
	vector<vector<int>> numList(K, vector<int>(3));
	for (int i=0; i<K; i++) {
		cin >> numList[i][0] >> numList[i][1] >> numList[i][2];
		field[numList[i][0]] = {
			(numList[i][0]-1)/N, 
			(numList[i][0]-1)%N
		};
	}

	for (int i=0; i<K; i++) {
		pair<int, int> nowPos = field[numList[i][0]];
		pair<int, int> targetPos = {numList[i][1]-1, numList[i][2]-1};

		int xDist = targetPos.first - nowPos.first;
		int yDist = targetPos.second - nowPos.second;

		if (xDist < 0) xDist += N;
		if (yDist < 0) yDist += N;

		for (auto iter=field.begin(); iter!=field.end(); iter++) {
			if (iter->second.first == nowPos.first) {
				iter->second.second += yDist;
				iter->second.second %= N;
			}
		}

		for (auto iter=field.begin(); iter!=field.end(); iter++) {
			if (iter->second.second == targetPos.second) {
				iter->second.first += xDist;
				iter->second.first %= N;
			}
		}

		cout << xDist + yDist << "\n";
	}
}
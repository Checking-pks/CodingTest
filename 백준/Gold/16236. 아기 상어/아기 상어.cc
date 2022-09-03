#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<int> findingCloseFish(vector<vector<int>> field, pair<int, int> sharkPos, int sharkSize) {
	vector<vector<bool>> alreadyCheck(field.size(), vector<bool>(field[0].size(), false));
	list<vector<int>> bucket;
	vector<vector<int>> resultingCandidates;

	bucket.push_back({sharkPos.first, sharkPos.second, 0});

	while (bucket.size()) {
		vector<int> nowPos = bucket.front();
		bucket.pop_front();

		if (alreadyCheck[nowPos[0]][nowPos[1]] || (field[nowPos[0]][nowPos[1]] != 9 && field[nowPos[0]][nowPos[1]] > sharkSize))
			continue;

		if (field[nowPos[0]][nowPos[1]] != 0 && field[nowPos[0]][nowPos[1]] < sharkSize) 
			resultingCandidates.push_back(nowPos);
			
		alreadyCheck[nowPos[0]][nowPos[1]] = true;

		bucket.push_back({nowPos[0] - 1, nowPos[1], nowPos[2] + 1});
		bucket.push_back({nowPos[0], nowPos[1] - 1, nowPos[2] + 1});
		bucket.push_back({nowPos[0], nowPos[1] + 1, nowPos[2] + 1});
		bucket.push_back({nowPos[0] + 1, nowPos[1], nowPos[2] + 1});
	}

	if (resultingCandidates.empty())
		return {sharkPos.first, sharkPos.second, 0};

	vector<int> result = resultingCandidates.front();

	for (vector<int> candidate:resultingCandidates) {
		if ((result[2] > candidate[2]) || 
			(result[2] == candidate[2] && result[0] > candidate[0]) || 
			(result[2] == candidate[2] && result[0] == candidate[0] && result[1] > candidate[1]))
			result = candidate;
	}
	
	return result;
}

int main() {
	int n;
	cin >> n;
	
	vector<vector<int>> field(n + 2, vector<int>(n + 2, 8));
	pair<int, int> sharkPos;
	int sharkSize = 2, eatenFish = 0, result = 0;
	
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			int num;
			cin >> num;

			field[i][j] = num;

			if (num == 9)
				sharkPos = {i, j};
		}
	}
	
	while (true) {
		vector<int> nowResult = findingCloseFish(field, sharkPos, sharkSize);
		
		result += nowResult[2];

		if (nowResult[0] == sharkPos.first && nowResult[1] == sharkPos.second) 
			break;

		field[sharkPos.first][sharkPos.second] = 0;
		sharkPos = {nowResult[0], nowResult[1]};
		field[sharkPos.first][sharkPos.second] = 9;

		if (sharkSize < 7 && ++eatenFish == sharkSize) {
			eatenFish = 0;
			sharkSize++;
		}
	}

	cout << result;
}
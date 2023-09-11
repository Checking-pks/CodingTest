#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	vector<vector<int>> field(7, vector<int>(7, -1));
	vector<vector<bool>> alreadyVisit(7, vector<bool>(7, false));
	
	for (int i=1; i<6; i++) 
		for (int j=1; j<6; j++) 
			cin >> field[i][j];

	pair<int, int> pos;
	cin >> pos.first >> pos.second;

	pos.first++; pos.second++;

	int result = -1;
	queue<pair<int, pair<int,int>>> bucket;
	bucket.push({0, pos});

	while (bucket.size()) {
		auto now = bucket.front();
		bucket.pop();
		
		if (alreadyVisit[now.second.first][now.second.second]) continue;
		if (field[now.second.first][now.second.second] == -1) continue;
		if (field[now.second.first][now.second.second] == 1) {
			result = now.first;
			break;
		}

		alreadyVisit[now.second.first][now.second.second] = true;

		bucket.push({now.first+1, {now.second.first + 1, now.second.second}});
		bucket.push({now.first+1, {now.second.first - 1, now.second.second}});
		bucket.push({now.first+1, {now.second.first, now.second.second + 1}});
		bucket.push({now.first+1, {now.second.first, now.second.second - 1}});
	}

	cout << result;
}
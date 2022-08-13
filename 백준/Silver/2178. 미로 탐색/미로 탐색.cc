#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	vector<vector<bool>> field(n + 2, vector<bool>(m + 2));
	vector<vector<bool>> alreadyVisit(n + 2, vector<bool>(m + 2));
	queue<vector<int>> posBucket;

	for (int i=1; i<=n; i++) {
		string line;
		cin >> line;
		
		for (int j=1; j<=m; j++) 
			field[i][j] = line[j - 1] - '0';
	}

	posBucket.push({1, 1, 1});

	while (true) {
		vector<int> nowPos = posBucket.front();
		posBucket.pop();

		if (nowPos[0] == n && nowPos[1] == m) {
			cout << nowPos[2];
			break;
		}
		
		if (field[nowPos[0]][nowPos[1]] == 0 || alreadyVisit[nowPos[0]][nowPos[1]]) 
			continue;

		alreadyVisit[nowPos[0]][nowPos[1]] = true;

		posBucket.push({nowPos[0] + 1, nowPos[1], nowPos[2] + 1});
		posBucket.push({nowPos[0], nowPos[1] + 1, nowPos[2] + 1});
		posBucket.push({nowPos[0] - 1, nowPos[1], nowPos[2] + 1});
		posBucket.push({nowPos[0], nowPos[1] - 1, nowPos[2] + 1});
	}
	
    return 0;
}
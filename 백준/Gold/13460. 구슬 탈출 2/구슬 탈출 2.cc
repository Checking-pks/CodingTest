#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int n, m, result = -1;
	cin >> n >> m;

	auto field = vector<string>(n, "");
	auto moveData = vector<vector<vector<pair<int, int>>>>(n, vector<vector<pair<int, int>>> (m, vector<pair<int, int>> (4, {0, 0})));
	auto alreadyVisit = vector<vector<pair<bool, bool>>>(n, vector<pair<bool, bool>>(m, {false, false}));
	list<vector<int>> bucket;
	pair<int, int> redPos, bluePos, oPos;
	
	// input field data	
	for (int i=0; i<n; i++) 
		cin >> field[i];
	
	// set move data _ up, down
	for (int j=0, isO; j<m; j++) {
		for (int i=0, stack=0; i<n; i++) {
			char nowTile = field[i][j];

			switch (nowTile) {
				case 'O':
					oPos = {i, j};
					isO = 2;
				case '#':
					for (int k=i-stack; k<=i-1; k++) {
						moveData[k][j][0] = {i-stack -(isO == 1), j};
						moveData[k][j][1] = {i-1 +(isO == 2), j};
					}

					stack = 0;
					isO = (nowTile == 'O'); 
					break;
				case 'R':
				case 'B':
					if (nowTile == 'R') redPos = {i, j};
					if (nowTile == 'B')	bluePos = {i, j};
				case '.':
					stack++;
					break;
			}
		}
	}

	// set move data _ left, right
	for (int i=0, isO; i<n; i++) {
		for (int j=0, stack=0; j<m; j++) {
			char nowTile = field[i][j];

			switch (nowTile) {
				case 'O':
					isO = 2;
				case '#':
					for (int k=j-stack; k<=j-1; k++) {
						moveData[i][k][2] = {i, j-stack -(isO == 1)};
						moveData[i][k][3] = {i, j-1 +(isO == 2)};
					}

					stack = 0;
					isO = (nowTile == 'O'); 
					break;
				case 'R':
				case 'B':
				case '.':
					stack++;
					break;
			}
		}
	}
	
	// do simulate & output
	bucket.push_back({redPos.first, redPos.second, bluePos.first, bluePos.second, 0});
	
	while (bucket.size()) {
		vector<int> now = bucket.front();
		bucket.pop_front();

		if (pair<int, int>{now[0], now[1]} == oPos) { result = now[4]; break; }

		for (int i=0; i<4; i++) {
			pair<int, int> redBefore = {now[0], now[1]}, blueBefore = {now[2], now[3]};
			pair<int, int> redMove = moveData[now[0]][now[1]][i], blueMove = moveData[now[2]][now[3]][i];
	
			if (redMove == blueMove && redMove != oPos) {
				bool isRedMin = (redBefore < blueBefore);
	
				switch (i) {
					case 0:
						if (isRedMin) blueMove.first++;
						else redMove.first++;
						break;
					case 1:
						if (isRedMin) redMove.first--;
						else blueMove.first--;
						break;
					case 2:
						if (isRedMin) blueMove.second++;
						else redMove.second++;
						break;
					case 3:
						if (isRedMin) redMove.second--;
						else blueMove.second--;
						break;
				}
			}

			if (now[4] < 10 && blueMove != oPos) {
				bucket.push_back({redMove.first, redMove.second, blueMove.first, blueMove.second, now[4] + 1});
			}
		}
	}

	cout << result;
}
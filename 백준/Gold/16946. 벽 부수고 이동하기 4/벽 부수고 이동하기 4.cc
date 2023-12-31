#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<vector<bool>> field;
vector<vector<int>>  area;
vector<int> areaList;
vector<pair<int, int>> moveList = {
	{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void areaCheck(int xPos, int yPos, int &areaCount) {
	if (field[xPos][yPos]) return;
	if (area[xPos][yPos])  return;
	area[xPos][yPos] = areaList.size();
	areaCount++;

	for (int i=0; i<moveList.size(); i++) {
		areaCheck(
			xPos+moveList[i].first, 
			yPos+moveList[i].second, 
			areaCount
		);
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	field = vector<vector<bool>>(N+2, vector<bool>(M+2, true));
	area  = vector<vector<int>> (N+2, vector<int> (M+2, false));
	areaList.push_back(0);

	for (int i=1; i<=N; i++) {
		string s;
		cin >> s;
		for (int j=1; j<=M; j++) 
			field[i][j] = (s[j-1] == '1');
	}

	for (int i=1, count; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			if (field[i][j]) continue;
			if (area[i][j])  continue;
			count = 0;
			areaCheck(i, j, count);
			areaList.push_back(count);
		}
	}

	for (int i=1, now; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			if (!field[i][j]) {
				cout << 0;
				continue;
			}

			list<int> nearArea;
			for (int k=0, xPos, yPos; k<moveList.size(); k++) {
				xPos = i + moveList[k].first;
				yPos = j + moveList[k].second;
				nearArea.push_back(area[xPos][yPos]);
			}

			nearArea.sort();
			nearArea.unique();

			now = 1;
			for (int n:nearArea) 
				now += areaList[n];
			cout << now % 10;
		}
		cout << "\n";
	}
}
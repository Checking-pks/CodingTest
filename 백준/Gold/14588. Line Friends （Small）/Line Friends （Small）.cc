#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> field;
	vector<pair<int, int>> lineList;
	int lineNum, questionNum;

	// input	: line number
	cin >> lineNum;

	// input	: line info
	for (int i=0, start, end; i<lineNum; i++) {
		cin >> start >> end;
		lineList.push_back({start, end});
	}
	
	// assign default
	field = vector<vector<int>>(lineNum, vector<int>(lineNum, 301));

	for (int i=0; i<lineNum; i++) {
		for (int j=0; j<lineNum; j++) {
			if (i == j) continue;
			if (lineList[i].first <= lineList[j].first && lineList[i].second >= lineList[j].first) {
				field[i][j] = 1;
				field[j][i] = 1;
			}
		}
	}
	
	// do simulate
	for (int i=0; i<lineNum; i++) {
		for (int j=0; j<lineNum; j++) {
			for(int k=0; k<lineNum; k++) {
				if (j==k) continue;
				field[j][k] = ((field[j][k] < field[j][i] + field[i][k]) ? field[j][k] : field[j][i] + field[i][k]);
			}
		}
	}

	// input	: question number
	cin >> questionNum;

	// input & output	: question info
	for (int i=0, l1, l2; i<questionNum; i++) {
		cin >> l1 >> l2;
		cout << ((field[--l1][--l2] == 301) ? -1 : field[l1][l2]) << "\n";
	}
}
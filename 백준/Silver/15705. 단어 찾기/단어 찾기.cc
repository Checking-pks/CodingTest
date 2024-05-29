#include <iostream>
#include <vector>

using namespace std;

string s;
vector<vector<char>> field;
vector<pair<int, int>> moveList = {
	{0, 1}, {0, -1}, {1, 0}, {-1, 0}, 
	{1, 1}, {-1, -1}, {1, -1}, {-1, 1}
};

bool check(int x, int y) {
	for (int i=0; i<moveList.size(); i++) {
		bool isFind = true;
		for (int j=1; j<s.length(); j++) {
			int nowX = x + j * moveList[i].first;
			int nowY = y + j * moveList[i].second;

			if (s[j] != field[nowX][nowY]) {
				isFind = false;
				break;
			}
		}

		if (isFind)
			return true;
	}

	return false;
}

int main() {
	cin >> s;

	int r, c;
	cin >> r >> c;

	field = vector<vector<char>>(r + 2, vector<char>(c + 2));
	for (int i=1; i<=r; i++) {
		string now;
		cin >> now;

		for (int j=1; j<=c; j++) 
			field[i][j] = now[j-1];
	}

	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (s[0] != field[i][j])
				continue;

			if (check(i, j)) {
				cout << 1;
				return 0;
			}
		}
	}

	cout << 0;
}
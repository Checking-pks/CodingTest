#include <iostream>
#include <vector>

using namespace std;

int main() {
	// input
	int num;
	cin >> num;

	// exception
	if (num == 1) {
		cout << "*";
		return 0;
	}

	// variable
	int width = 4*num-3;
	int x = 2, y = width+1, type = 0;
	vector<vector<bool>> field(width+6, vector<bool>(width+4, false));
	vector<pair<int, int>> move = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

	// outline
	for (int i=0; i<field.size(); i++) {
		field[i][0] = true;
		field[i][field[0].size()-1] = true;
	}

	for (int i=0; i<field[0].size(); i++) {
		field[0][i] = true;
		field[field.size()-1][i] = true;
	}

	// drawing
	while (true) {
		field[x][y] = true;

		if (field[x + move[type].first * 2][y + move[type].second * 2]) {
			type = (type+1)%4;
		}

		x += move[type].first;
		y += move[type].second;

		if (field[x + move[type].first][y + move[type].second]) break;
	}

	// output
	for (int i=2; i<field.size()-2; i++) {
		for (int j=2; j<field[i].size()-2; j++) {
			cout << (field[i][j] ? "*" : " ");
			if (i == 3) break;
		}
		cout << "\n";
	}
}
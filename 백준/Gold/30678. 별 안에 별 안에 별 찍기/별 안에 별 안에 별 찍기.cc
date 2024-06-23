#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> field;
vector<vector<int>> starPos = {{0, 2}, {1, 2}, {2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4}, {3, 1}, {3, 2}, {3, 3}, {4, 1}, {4,3}};

void staring(int s, int x, int y) {
	if (s == 1) {
		field[x][y] = true;
		return;
	}

	int b = s / 5;
	for (int i=0; i<starPos.size(); i++) 
		staring(
			b, 
			x + b * starPos[i][0], 
			y + b * starPos[i][1]
		);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int s = 1;
	for (int i=0; i<N; i++)
		s *= 5;
	
	field = vector<vector<bool>> (s, vector<bool>(s));
	staring(s, 0, 0);

	for (int i=0; i<s; i++) {
		for (int j=0; j<s; j++) {
			cout << (field[i][j] ? '*' : ' ');
		}
		cout << "\n";
	}
}
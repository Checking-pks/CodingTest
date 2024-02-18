#include <iostream>
#include <vector>

using namespace std;

int H, W;
vector<string> field;

void removeSheep(int x, int y) {
	if (x < 0 || x >= H) return;
	if (y < 0 || y >= W) return;
	if (field[x][y] == '.') return;
	field[x][y] = '.';

	removeSheep(x-1, y);
	removeSheep(x+1, y);
	removeSheep(x, y-1);
	removeSheep(x, y+1);
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int result=0;
		cin >> H >> W;

		field = vector<string>(H);
		for (int i=0; i<H; i++)
			cin >> field[i];

		for (int i=0; i<H; i++) {
			for (int j=0; j<W; j++) {
				if (field[i][j] == '.') continue;
				removeSheep(i, j);
				result++;
			}
		}

		cout << result << "\n";
	}
}
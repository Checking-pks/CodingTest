#include <iostream>
#include <vector>

using namespace std;

int main() {
	int H, W, X, Y;
	cin >> H >> W >> X >> Y;

	vector<vector<int>> nList(H + X, vector<int>(W + Y));
	for (int i = 0; i < H + X; i++) {
		for (int j = 0; j < W + Y; j++) {
			cin >> nList[i][j];

			if (i - X >= 0 && j - Y >= 0)
				nList[i][j] -= nList[i - X][j - Y];
		}
	}

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++)
			cout << nList[i][j] << " ";
		cout << "\n";
	}
}
#include <iostream>
#include <vector>

using namespace std;

class color {
public:
	int R, G, B;
	int getAverage() { return (R + G + B) / 3; }
};

void disableObject(vector<vector<bool>> &field, int x, int y) {
	if (!field[x][y])
		return;
	field[x][y] = false;

	disableObject(field, x + 1, y);
	disableObject(field, x - 1, y);
	disableObject(field, x, y + 1);
	disableObject(field, x, y - 1);
}

int main() {
	int N, M, T, result = 0;
	cin >> N >> M;

	vector<vector<color>> screen(N + 2, vector<color>(M + 2));
	vector<vector<bool>> field(N + 2, vector<bool>(M + 2));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> screen[i][j].R >> screen[i][j].G >> screen[i][j].B;
		}
	}

	cin >> T;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			field[i][j] = (screen[i][j].getAverage() >= T);
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (!field[i][j])
				continue;
			result++;
			disableObject(field, i, j);
		}
	}

	cout << result;
}
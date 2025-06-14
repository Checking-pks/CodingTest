#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int X, Y, x, y, result=0;
		cin >> X >> Y >> x >> y;

		vector<vector<bool>> field(X, vector<bool>(Y));

		for (int i=0; i<X; i++) {
			for (int j=0; j<Y; j++) {
				if (field[i][j]) continue;
				result++;

				int nextX = i + x, nextY = j + y;
				if (nextX >= X || nextY >= Y) continue;
				field[nextX][nextY] = true;
			}
		}

		cout << result << "\n";
	}
}
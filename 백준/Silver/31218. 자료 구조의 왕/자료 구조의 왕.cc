#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> field;
int grassCount;

void mowing() {
	int dy, dx, y, x;
	cin >> dy >> dx >> y >> x;

	while (true) {
		if (field[y][x]) break;
		field[y][x] = true;
		y += dy; x += dx;
		grassCount--;
	}
}

void outputFieldInfo() {
	int y, x;
	cin >> y >> x;
	cout << field[y][x] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m, Q;
	cin >> n >> m >> Q;

	field = vector<vector<bool>>(n+2, vector<bool>(m+2));
	grassCount = n*m;
	
	for (int i=0; i<n+2; i++) {
		field[i][0] = true;
		field[i][m+1] = true;
	}
	for (int i=0; i<m+2; i++) {
		field[0][i] = true;
		field[n+1][i] = true;
	}

	for (int i=0, query; i<Q; i++) {
		cin >> query;

		switch (query) {
			case 1:
				mowing();
				break;
			case 2:
				outputFieldInfo();
				break;
			case 3:
				cout << grassCount << "\n";
				break;
		}
	}
}
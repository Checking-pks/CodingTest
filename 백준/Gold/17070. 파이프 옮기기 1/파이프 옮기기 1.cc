#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<vector<int>>> field(n+2, vector<vector<int>>(n+2, {1, 0, 0, 0}));
	
	for (int i=1; i<=n; i++) {
		for (int j=1, now; j<=n; j++) {
			cin >> now;
			field[i][j][0] = now;
		}
	}

	field[1][2][1] = 1;
	
	for (int i=1; i<=n; i++) {
		for (int j=2; j<=n; j++) {
			if (!field[i][j+1][0])
				field[i][j+1][1] += field[i][j][1] + field[i][j][3];
			if (!field[i+1][j][0])
				field[i+1][j][2] += field[i][j][2] + field[i][j][3];
			if (!field[i+1][j][0] && !field[i][j+1][0] && !field[i+1][j+1][0]) 
				field[i+1][j+1][3] += field[i][j][1] + field[i][j][2] + field[i][j][3];
		}
	}

	cout << field[n][n][1] + field[n][n][2] + field[n][n][3];
}
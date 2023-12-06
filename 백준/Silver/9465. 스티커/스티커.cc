#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, result=0;
		cin >> n;

		vector<vector<int>> field(2, vector<int>(n+1));
		for (int i=0; i<2; i++)
			for (int j=1; j<=n; j++)
				cin >> field[i][j];

		for (int i=2; i<=n; i++) {
			field[0][i] += max(field[0][i-2], max(field[1][i-2], field[1][i-1]));
			field[1][i] += max(field[1][i-2], max(field[0][i-2], field[0][i-1]));
		}

		result = max(max(field[0][n], field[1][n]), max(field[0][n-1], field[1][n-1]));
		cout << result << "\n";
	}
}
#include <iostream>
#include <vector>

using namespace std;

void spin(vector<vector<int>> &field, int n, int d) {
	if (!d) return;

	vector<vector<int>> result = field;
	for (int i=0; i<n; i++) {
		result[i][(n-1)/2] = field[i][i];
		result[i][n-1-i] = field[i][(n-1)/2];
		result[(n-1)/2][n-1-i] = field[i][n-1-i];
		result[i][i] = field[(n-1)/2][i];
	}

	field = result;
	spin(field, n, d - 45);
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n, d;
		cin >> n >> d;
		
		vector<vector<int>> field(n, vector<int>(n));
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				cin >> field[i][j];

		if (d < 0)
			d += 360;

		spin(field, n, d);

		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++)
				cout << field[i][j] << " ";
			cout << "\n";
		}	
	}
}
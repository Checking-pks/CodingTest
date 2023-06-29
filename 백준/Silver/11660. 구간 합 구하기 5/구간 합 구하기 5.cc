#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int size, question;
	cin >> size >> question;

	vector<vector<int>> field(size+2, vector<int>(size+2, 0));
	vector<vector<int>> sum(size+2, vector<int>(size+2, 0));
	
	for (int i=1; i<=size; i++) {
		for (int j=1; j<=size; j++) {
			cin >> field[i][j];
		}
	}

	for (int i=1; i<=size; i++) {
		for (int j=1; j<=size; j++) {
			sum[i][j] = sum[i-1][j] + sum[i][j-1] + field[i][j] - sum[i-1][j-1];
		}
	}

	while (question--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		cout << sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] << "\n";
	}
}
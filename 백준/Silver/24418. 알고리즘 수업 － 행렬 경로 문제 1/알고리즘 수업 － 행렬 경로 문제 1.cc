#include <iostream>
#include <vector>

using namespace std;

int matrix_path(vector<vector<int>> m, int n) {
	int result=1;

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			m[i][j] = m[i-1][j] + m[i][j-1];
		}
		result += m[i].back();
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> field(n, vector<int>(n, 1));
	cout << matrix_path(field, n-1) * 2 << " " << n*n;
}
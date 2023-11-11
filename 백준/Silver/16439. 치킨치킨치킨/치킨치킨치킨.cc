#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, result=0;
	cin >> n >> m;

	vector<vector<int>> field(n, vector<int>(m));

	for (int i=0; i<n; i++) 
		for (int j=0; j<m; j++) 
			cin >> field[i][j];

	for (int i=0; i<m-2; i++) {
		for (int j=i+1; j<m-1; j++) {
			for (int k=j+1; k<m; k++) {
				int now = 0;

				for (int a=0; a<n; a++) {
					now += max(field[a][i], max(field[a][j], field[a][k]));
				}

				result = max(result, now);
			}
		}
	}

	cout << result;
}
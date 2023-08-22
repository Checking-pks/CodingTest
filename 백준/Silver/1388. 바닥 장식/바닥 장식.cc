#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, result = 0;
	cin >> n >> m;

	vector<string> field(n, "");
	vector<vector<bool>> alreadyVisit(n, vector<bool>(m, false));

	for (int i=0; i<n; i++)
		cin >> field[i];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (alreadyVisit[i][j]) continue;

			if (field[i][j] == '-') {
				for (int k=j; k<m; k++) {
					if (field[i][k] == '-') 
						alreadyVisit[i][k] = true;
					else
						break;
				}
			} else {
				for (int k=i; k<n; k++) {
					if (field[k][j] == '|') 
						alreadyVisit[k][j] = true;
					else
						break;
				}
			}

			result++;
		}
	}

	cout << result;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<string>> field(n, vector<string>(3, ""));
	for (int i=0; i<n; i++) {
		cin >> field[i][0] >> field[i][1] >> field[i][2];
	}

	for (int i=0; i<m; i++) {
		int result=0;
		vector<string> now(3, "");
		cin >> now[0] >> now[1] >> now[2];

		for (int j=0; j<n; j++) {
			int isResult=1;
			for (int k=0; k<3; k++) {
				if (now[k] == "-") continue;
				if (now[k] != field[j][k]) {
					isResult=0;
					break;
				}
			}
			result += isResult;
		}
		cout << result << "\n";
	}
}
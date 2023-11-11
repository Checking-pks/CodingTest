#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, result=0;
	cin >> n >> m;

	string resultStr="", dna = "ACGT";
	vector<vector<int>> field(m, vector<int>(4, 0));
	
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;

		for (int j=0; j<m; j++) {
			for (int k=0; k<4; k++) {
				if (s[j] == dna[k]) {
					field[j][k]++;
				}
			}
		}
	}

	for (int i=0; i<m; i++) {
		int nowMax=0, maxNum=0;
		
		for (int j=0; j<4; j++) {
			if (nowMax < field[i][j]) {
				nowMax = field[i][j];
				maxNum = j;
			}
		}

		resultStr += dna[maxNum];
		result += n - nowMax;
	}

	cout << resultStr << "\n" << result;
}
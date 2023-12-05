#include <iostream>
#include <vector>

using namespace std;

const int INF = 1000001;

int main() {
	int n, result = INF;
	cin >> n;

	vector<vector<int>>field(n, vector<int>(3, 0));

	for (int i=0; i<n; i++) 
		cin >> field[i][0] >> field[i][1] >> field[i][2];

	for (int i=0; i<3; i++) {
		vector<int> numList(3, INF);
		numList[i] = field[0][i];

		for (int j=1; j<n; j++) {
			vector<int> newNumList(3);
			newNumList[0] = field[j][0] + min(numList[1], numList[2]);
			newNumList[1] = field[j][1] + min(numList[0], numList[2]);
			newNumList[2] = field[j][2] + min(numList[0], numList[1]);
			numList = newNumList;
		}

		for (int j=0; j<3; j++) {
			if (i==j) continue;
			result = min(result, numList[j]);
		}
	}

	cout << result;
}
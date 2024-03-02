#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> field;

int recursion(int N, int x, int y) {
	vector<int> nList;
	
	if (N <= 2) {
		 nList = {
			field[x][y], 
			field[x+1][y],
			field[x][y+1], 
			field[x+1][y+1]
		};
	} else {
		nList = {
			recursion(N/2, x, y),
			recursion(N/2, x+N/2, y),
			recursion(N/2, x, y+N/2),
			recursion(N/2, x+N/2, y+N/2)
		};
	}

	sort(nList.begin(), nList.end());
	return nList[2];
}

int main() {
	int N;
	cin >> N;

	field = vector<vector<int>>(N, vector<int>(N));
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			cin >> field[i][j];

	cout << recursion(N, 0, 0);
}
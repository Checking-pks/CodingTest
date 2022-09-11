#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<bool>> connection(n, vector<bool>(n, false));
	vector<vector<int>> field(n, vector<int>(n, n));
	list<vector<int>> bucket;
	
	for (int i=0; i<m; i++) {
		int p1, p2;
		cin >> p1 >> p2;

		field[--p1][--p2] = 1;
		field[p2][p1] = 1;

		connection[p1][p2] = true;
		connection[p2][p1] = true;

		bucket.push_back({p1, p2, 2});
		bucket.push_back({p2, p1, 2});
	}
	
	while (bucket.size()) {
		vector<int> nowCheck = bucket.front();
		bucket.pop_front();

		for (int i=0; i<n; i++) {
			if (nowCheck[0] == i)
				continue;
			
			if (connection[nowCheck[1]][i] && field[nowCheck[0]][i] > nowCheck[2]) {
				field[nowCheck[0]][i] = nowCheck[2];
				bucket.push_back({nowCheck[0], i, nowCheck[2] + 1});
			}
		}
	}

	int result, min = 10000;

	for (int i=0; i<n; i++) {
		int nowMin = 0;
		
		for (int j=0; j<n; j++) {
			if (i == j)
				continue;
			
			nowMin += field[i][j];
		}

		if (min > nowMin) {
			min = nowMin;
			result = i;
		}
	}

	cout << ++result;
}
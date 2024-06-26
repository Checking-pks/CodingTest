#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
	if (a[1] != b[1])
		return a[1] > b[1];

	return a[2] < b[2];
}

int main() {
	int K;
	cin >> K;

	int M, N, P;
	int p, t, j;
	char m;

	for (int i=1; i<=K; i++) {
		cin >> M >> N >> P;

		vector<vector<int>> userList(P, vector<int>(3));
		vector<vector<int>> wrongList(P, vector<int>(M));
		for (int i=0; i<P; i++) 
			userList[i][0] = i + 1;

		for (int i=0; i<N; i++) {
			cin >> p >> m >> t >> j;

			if (wrongList[p - 1][m - 'A'] == -1)
				continue;

			if (j) {
				userList[p - 1][1]++;
				userList[p - 1][2] += t + wrongList[p - 1][m - 'A'] * 20;
				wrongList[p - 1][m - 'A'] = -1;
			} else {
				wrongList[p - 1][m - 'A']++;
			}
		}

		sort(userList.begin(), userList.end(), cmp);
		
		cout << "Data Set " << i << ":\n";
		for (int i=0; i<P; i++) {
			for (int j=0; j<3; j++)
				cout << userList[i][j] << " ";
			cout << "\n";
		}
		cout << "\n";
	}
}
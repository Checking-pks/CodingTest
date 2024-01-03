#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, result = 1000000000;
	cin >> N;

	vector<vector<int>> field(N, vector<int>(N));
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			cin >> field[i][j];

	vector<bool> perList(N);
	for (int i=0; i<N/2; i++)
		perList[i] = true;

	do {
		int t1=0, t2=0;
		for (int i=0; i<perList.size()-1; i++) {
			for (int j=i+1; j<perList.size(); j++) {
				if (perList[i] != perList[j]) continue;
				if (perList[i]) 
					t1 += field[i][j] + field[j][i];
				else
					t2 += field[i][j] + field[j][i];
			}
		}
		result = min(result, abs(t1-t2));
	} while (prev_permutation(perList.begin(), perList.end()));

	cout << result;
}
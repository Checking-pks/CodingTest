#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 10'000'001;

int main() {
	int N, result = MAX;
	cin >> N;

	vector<vector<int>> nList(N, vector<int>(N));
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			cin >> nList[i][j];

	vector<int> perList(N);
	for (int i=0; i<N; i++)
		perList[i] = i;

	do {
		int now = 0;

		perList.push_back(perList.front());
		for (int i=0; i<N; i++)  {
			if (!nList[perList[i]][perList[i+1]]) {
				now = MAX;
				break;
			}
			now += nList[perList[i]][perList[i+1]];
		}

		result = min(result, now);
		perList.pop_back();
	} while (next_permutation(perList.begin(), perList.end()));

	cout << result;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, V, E, result = 0;
	cin >> N >> V >> E;

	int position_kist, position_crFood;
	cin >> position_kist >> position_crFood;

	vector<int> peoplePositions(N);
	for (int i = 0; i < N; i++)
		cin >> peoplePositions[i];

	vector<vector<int>> distanceList(V + 1, vector<int>(V + 1, 101));
	for (int i = 0, a, b, l; i < E; i++) {
		cin >> a >> b >> l;

		distanceList[a][b] = min(distanceList[a][b], l);
		distanceList[b][a] = min(distanceList[b][a], l);
	}

	for (int k = 1; k <= V; k++) {
		for (int i = 1; i <= V; i++) {
			for (int j = 1; j <= V; j++) {
				if (i == j) {
					distanceList[i][j] = 0;
					continue;
				}

				distanceList[i][j] =
						min(distanceList[i][j], distanceList[i][k] + distanceList[k][j]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		int nowPos = peoplePositions[i];
		int toKist = distanceList[nowPos][position_kist];
		int toCrFood = distanceList[nowPos][position_crFood];

		result += (toKist == 101 ? -1 : toKist) + (toCrFood == 101 ? -1 : toCrFood);
	}

	cout << result;
}
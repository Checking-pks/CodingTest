#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int N, M, result = 41;
	cin >> N >> M;

	vector<pair<int, int>> village;
	vector<vector<bool>> field(N, vector<bool>(M));
	for (int i=0; i<N; i++) {
		string now;
		cin >> now;
		
		for (int j=0; j<M; j++) {
			if (now[j] == '0') continue;
			field[i][j] = true;
			village.push_back({i, j});
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (field[i][j]) continue;
			
			for (int a=i; a<N; a++) {
				for (int b=0; b<M; b++) {
					if (i == a && j == b) continue;
					if (field[a][b]) continue;
					
					int now = 0;
					
					for (int v=0; v<village.size(); v++) {
						int dist1 = abs(village[v].first - i) +
									abs(village[v].second - j);

						int dist2 = abs(village[v].first - a) +
									abs(village[v].second - b);

						now = max(now, min(dist1, dist2));
					}

					result = min(result, now);
				}
			}
		}
	}

	cout << result;
}
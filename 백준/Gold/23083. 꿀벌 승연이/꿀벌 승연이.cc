#include <iostream>
#include <vector>

using namespace std;

const int DIVISION = 1000000007;

vector<vector<int>> field;

void sum(pair<int, int> a, pair<int, int> b) {
    if (field[a.first][a.second] == -1)
        return;
        
    if (field[b.first][b.second] == -1)
        return;
        
    field[a.first][a.second] += field[b.first][b.second];
    field[a.first][a.second] %= DIVISION;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int N, M, K;
	cin >> N >> M >> K;
	
	field = vector<vector<int>>(N + 2, vector<int>(M + 2));

	for (int i=0, x, y; i<K; i++) {
		cin >> x >> y;
		field[x][y] = -1;
	}
	
	field[1][1] = 1;
	
	for (int j=1; j<=M; j++) {
	    for (int i=1; i<=N; i++) {
	        sum({i + 1, j}, {i, j});
            sum({i, j + 1}, {i, j});
            sum({i + (j & 1 ? -1 : 1), j + 1}, {i, j});
	    }
	}
	
	cout << field[N][M];
}
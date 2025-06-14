#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char, pair<int, int>> moveMap = {
	{'U', {-1, 0}}, {'D', {1, 0}}, {'L', {0, -1}}, {'R', {0, 1}}
};

int N, M, result = 0;
vector<vector<int>> visit;
vector<string> field;

bool simulate(int x, int y, int group)
{
	visit[x][y] = group;

	char moveChar = field[x][y];
	int nextX = x + moveMap[moveChar].first;
	int nextY = y + moveMap[moveChar].second;

	if (nextX < 0 || nextX >= N) return true;
	if (nextY < 0 || nextY >= M) return true;

	if (visit[nextX][nextY])
		return visit[nextX][nextY] == group;
	else
		return simulate(nextX, nextY, group);
}

int main()
{
	cin >> N >> M;

	visit = vector<vector<int>>(N, vector<int>(M));
	field = vector<string>(N);
	for (int i = 0; i < N; i++)
		cin >> field[i];

	for (int i = 0, group = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (visit[i][j]) continue;
			group++;

			result += simulate(i, j, group);
		}
	}

	cout << result;
}
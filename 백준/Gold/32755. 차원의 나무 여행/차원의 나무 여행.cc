#include <iostream>
#include <vector>

using namespace std;

int N, result = 0;
vector<bool> visit;
vector<vector<bool>> field;

int simulate(int pos)
{
	pair<int, int> result;
	for (int i = 1, now; i <= N; i++)
	{
		if (field[pos][i]) continue;
		if (visit[i]) continue;
		visit[i] = true;

		now = simulate(i);

		if (result.first < now)
			swap(result.first, now);

		if (result.second < now)
			swap(result.second, now);
	}

	return result.first + result.second + 1;
}

int main()
{
	cin >> N;
	
	visit = vector<bool>(N + 1);
	field = vector<vector<bool>>(N + 1, vector<bool>(N + 1));
	for (int i = 1, a, b; i < N; i++)
	{
		cin >> a >> b;
		field[a][b] = field[b][a] = 1;
	}
	
	for (int i = 1, now; i <= N; i++)
	{
		if (visit[i]) continue;
		visit[i] = true;

		now = simulate(i);
		result = max(result, now);
	}

	cout << result;
}
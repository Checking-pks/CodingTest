#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N, M, T;
	cin >> N >> M >> T;

	vector<vector<int>> field(N + 1, vector<int>(N + 1, -1));
	for (int i = 0, s, e, h; i < M; i++)
	{
		cin >> s >> e >> h;
		if (field[s][e] == -1)
			field[s][e] = h;

		field[s][e] = min(field[s][e], h);
	}

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N; k++)
		{
			if (field[i][k] == -1)
				continue;

			for (int j = 1; j <= N; j++)
			{
				if (field[k][j] == -1)
					continue;

				if (field[i][j] == -1)
					field[i][j] = max(field[i][k], field[k][j]);

				field[i][j] = min(field[i][j], max(field[i][k], field[k][j]));
			}
		}
	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N; k++)
		{
			if (field[i][k] == -1)
				continue;

			for (int j = 1; j <= N; j++)
			{
				if (field[k][j] == -1)
					continue;

				if (field[i][j] == -1)
					field[i][j] = max(field[i][k], field[k][j]);

				field[i][j] = min(field[i][j], max(field[i][k], field[k][j]));
			}
		}
	}
	
	for (int i = 0, s, e; i < T; i++)
	{
		cin >> s >> e;
		cout << field[s][e] << "\n";
	}
}
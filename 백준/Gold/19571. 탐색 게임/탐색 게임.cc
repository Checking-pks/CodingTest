#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N = 100;
	int K = N * N - N + 2;

	int i, j, num;

	vector<vector<int>> field(N, vector<int>(N));

	for (i = 0; i < N - 1; i++)
		field[i][i] = K++;

	i = N - 2, num = (N - 2) * (N - 1) + 1;
	field[i][i - 1] = num + N - 2;
	field[i + 1][i - 1] = num + N - 1;
	for (j = 0; j < N; j++)
	{
		if (field[i][j]) continue;
		field[i][j] = num++;
	}

	num = field[i + 1][i - 1] + 1;
	for (j = 0; j < N; j++)
	{
		if (field[i + 1][j]) continue;
		field[i + 1][j] = num++;
	}

	for (i = 0, num = 1; i < N - 2; i++)
	{
		for (j = 0; !(i & 1) && j < N; j++)
		{
			if (field[i][j]) continue;
			field[i][j] = num++;
		}

		for (j = N - 1; (i & 1) && j >= 0; j--)
		{
			if (field[i][j]) continue;
			field[i][j] = num++;
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			cout << field[i][j] << " ";
		cout << "\n";
	}
}
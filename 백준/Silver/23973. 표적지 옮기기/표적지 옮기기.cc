#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<string> field;

bool isTarget(int x, int y)
{
	vector<bool> hitTarget(10);

	for (int i = max(0, x - 10); i < min(N, x + 10); i++)
	{
		for (int j = max(0, y - 10); j < min(M, y + 10); j++)
		{
			if (field[i][j] == '0')
				continue;

			int distX = abs(x - i), distY = abs(y - j);
			int score = max(distX, distY);
			
			if (hitTarget[score])
				return false;

			hitTarget[score] = true;
		}
	}

	for (int i = 0; i < 10; i++)
		if (!hitTarget[i])
			return false;

	return true;
}

int main()
{
	cin >> N >> M;

	field = vector<string>(N);
	for (int i = 0; i < N; i++)
		cin >> field[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (field[i][j] == '0')
				continue;

			if (!isTarget(i, j))
				continue;

			cout << i << " " << j;
			return 0;
		}
	}

	cout << -1;
}
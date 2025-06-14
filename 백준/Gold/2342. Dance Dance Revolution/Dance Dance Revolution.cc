#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> costList = {
	{0, 2, 2, 2, 2}, 
	{2, 1, 3, 4, 3}, 
	{2, 3, 1, 3, 4}, 
	{2, 4, 3, 1, 3}, 
	{2, 3, 4, 3, 1}
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	vector<vector<int>> field(5, vector<int>(5, -1));

	int now;
	cin >> now;

	field[0][now] = 2;
	cin >> now;

	while (now)
	{
		vector<vector<int>> newField(5, vector<int>(5, -1));

		for (int i = 0; i <= 4; i++)
		{
			for (int j = i + 1, a, b, cost; j <= 4; j++)
			{
				if (field[i][j] == -1) continue;

				a = min(now, j), b = max(now, j);
				cost = costList[now][i] + field[i][j];

				if (newField[a][b] == -1)
					newField[a][b] = cost;

				newField[a][b] = min(newField[a][b], cost);


				a = min(now, i), b = max(now, i);
				cost = costList[now][j] + field[i][j];

				if (newField[a][b] == -1)
					newField[a][b] = cost;

				newField[a][b] = min(newField[a][b], cost);
			}
		}

		field = newField;

		cin >> now;
	}

	int result = -1;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = i + 1; j <= 4; j++)
		{
			if (field[i][j] == -1) continue;

			if (result == -1) result = field[i][j];

			result = min(result, field[i][j]);
		}
	}

	cout << result;
}
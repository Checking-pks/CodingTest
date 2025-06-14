#include <iostream>
#include <vector>

using namespace std;

int N, M, total = 0, broken = 0;
pair<int, int> start;
vector<vector<int>> field;
vector<pair<int, int>> moveList = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void input()
{
	cin >> N >> M;
	field = vector<vector<int>>(N + 2, vector<int>(M + 2, -1));
	for (int i = 1; i <= N; i++)
	{
		string line;
		cin >> line;

		for (int j = 1; j <= M; j++)
		{
			switch (line[j - 1])
			{
			case '@':
				start = {i, j};
			case '.':
				field[i][j] = 0;
				break;
			case '*':
				total++;
				field[i][j] = 1;
				break;
			case '#':
				total++;
				field[i][j] = 2;
				break;
			case '|':
				break;
			}
		}
	}
}

void simulate(int x, int y)
{
	if (field[x][y] <= 0) return;

	field[x][y]--;

	if (field[x][y]) return;

	broken++;

	for (int i = 0, mx, my; i < 4; i++)
	{
		mx = moveList[i].first;
		my = moveList[i].second;
		
		simulate(x + mx, y + my);
	}
}

int main()
{
	input();
	
	for (int i = 0, x, y, mx, my; i < 4; i++)
	{
		x = start.first;
		y = start.second;
		mx = moveList[i].first;
		my = moveList[i].second;
		
		simulate(x + mx, y + my);

		if (field[x + mx][y + my] != -1)
			simulate(x + 2 * mx, y + 2 * my);
	}

	cout << broken << " " << total - broken;
}
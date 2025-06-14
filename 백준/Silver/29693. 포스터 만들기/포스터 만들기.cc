#include <iostream>
#include <vector>

using namespace std;

int R, C;
vector<string> field;

bool simulate(bool isEven)
{
	int markPos = 0, center = C / 2;

	for (int i = 1; i < R && !markPos; i++)
	{
		bool canMarking = true;
		for (int j = center - 1 - isEven; j <= center + 1; j++)
		{
			if (field[i][j] == 'B')
			{
				canMarking = false;
				break;
			}
		}

		if (canMarking)
		{
			markPos = i;
			break;
		}
	}

	if (!markPos) 
		return false;

	field[markPos][center - 1 - isEven] = 'W';
	field[markPos][center + 1] = 'W';
	field[markPos][center - isEven] = 'Y';
	field[markPos][center] = 'Y';

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (field[i][j] == 'X')
				field[i][j] = 'B';

	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> R >> C;

	field = vector<string>(R);
	for (int i = 0; i < R; i++)
	{
		cin >> field[i];
		for (int j = 0; j < C; j++)
			if (field[i][j] == 'B')
				field[i][C - j - 1] = 'B';
	}

	if (!simulate((C & 1) == 0)) cout << "NO";
	else
	{
		cout << "YES\n";
		for (int i = 0; i < R; i++)
			cout << field[i] << "\n";
	}
}
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<string> field;
vector<vector<int>> counting;

void init()
{
	cin >> n;
	field = vector<string>(n);
	counting = vector<vector<int>>(n, vector<int>(n, 2500));

	for (int i = 0; i < n; i++)
		cin >> field[i];
}

void simulate(int x, int y, int change)
{
	if (x < 0 || x >= n) return;
	if (y < 0 || y >= n) return;
	
	if (field[x][y] == '0') change++;

	if (counting[x][y] <= change) return;

	counting[x][y] = change;

	simulate(x + 1, y, change);
	simulate(x - 1, y, change);
	simulate(x, y + 1, change);
	simulate(x, y - 1, change);
}

int main()
{
	init();
	simulate(0, 0, 0);

	cout << counting.back().back();
}
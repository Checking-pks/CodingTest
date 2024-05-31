#include <iostream>
#include <vector>

using namespace std;

void simulate(vector<vector<int>> field, 
			int x, int y, int apple, int move, int &result) 
{
	if (field[x][y] == -1)
		return;

	if (field[x][y] == 1)
		apple++;

	field[x][y] = -1;
	
	if (apple == 3) {
		result = min(result, move);
		return;
	}

	simulate(field, x+1, y, apple, move + 1, result);
	simulate(field, x-1, y, apple, move + 1, result);
	simulate(field, x, y+1, apple, move + 1, result);
	simulate(field, x, y-1, apple, move + 1, result);
}

int main() {
	vector<vector<int>> field = vector<vector<int>>(7, vector<int>(7, -1));

	for (int i=1; i<=5; i++) 
		for (int j=1; j<=5; j++) 
			cin >> field[i][j];

	int x, y, result = 100;
	cin >> x >> y;
	
	simulate(field, x+1, y+1, 0, 0, result);

	cout << (result == 100 ? -1 : result);
}
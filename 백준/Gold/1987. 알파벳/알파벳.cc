#include <iostream>
#include <vector>

using namespace std;

vector<string> field;
vector<bool> visit(26, false);
int maximum = 1;

void DFS(int x, int y, int move) {
	if (visit[field[x][y] - 'A'] || maximum == 26) {
		if (maximum < move) maximum = move;
		return;
	}

	visit[field[x][y] - 'A'] = true;

	if (x > 0) DFS(x-1, y, move + 1);
	if (x < field.size()-1) DFS(x+1, y, move + 1);
	if (y > 0) DFS(x, y-1, move + 1);
	if (y < field[0].size()-1) DFS(x, y+1, move + 1);

	visit[field[x][y] - 'A'] = false;
}

int main() {
	int r, c;
	cin >> r >> c;

	for (int i=0; i<r; i++) {
		string str;
		cin >> str;

		field.push_back(str);
	}

	DFS(0, 0, 0);

	cout << maximum;
}
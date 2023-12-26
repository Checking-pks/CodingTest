#include <iostream>
#include <vector>

using namespace std;

vector<string> field;

void recursion(int n, int x, int y) {
	if (n == 3) {
		field[x][y+2] = '*';
		field[x+1][y+1] = '*';
		field[x+1][y+3] = '*';
		for (int i=0; i<5; i++)
			field[x+2][y+i] = '*';
		return;
	}

	recursion(n/2, 	x+0, 	y+n/2);
	recursion(n/2, 	x+n/2, 	y+0);
	recursion(n/2, 	x+n/2, 	y+n);
}

int main() {
	int n;
	cin >> n;

	field = vector<string> (n, string(2*n, ' '));

	recursion(n, 0, 0);

	for (int i=0; i<n; i++) 
		cout << field[i] << "\n";
}
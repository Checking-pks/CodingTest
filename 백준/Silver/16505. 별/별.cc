#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> field;

void staring(int x, int y, int N) {
	if (N == 0) {
		field[x][y] = '*';
		return;
	}
	
	staring(x, y, N-1);
	staring(x + (1<<(N-1)), y, N-1);
	staring(x, y + (1<<(N-1)), N-1);
}

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	field = vector<vector<char>>(1<<N, vector<char>(1<<N, ' '));

	staring(0, 0, N);

	for (int i=0; i<field.size(); i++) {
		for (int j=0; j<field.size()-i; j++) 
			cout << field[i][j];
		cout << "\n";
	}
}
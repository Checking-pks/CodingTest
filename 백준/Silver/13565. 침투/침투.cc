#include <iostream>
#include <vector>

using namespace std;

bool check(vector<vector<bool>> &field, int x, int y) {
	if (x == field.size()-1) return true;
	if (field[x][y]) return false;
	field[x][y] = true;

	bool result = false;
	
	result |= check(field, x+1, y);
	result |= check(field, x-1, y);
	result |= check(field, x, y+1);
	result |= check(field, x, y-1);

	return result;
}

int main() {
	int M, N;
	cin >> M >> N;
	
	vector<vector<bool>> field(M+2, vector<bool>(N+2, true));
	for (int i=1; i<=M; i++) {
		string s;
		cin >> s;
		for (int j=0; j<N; j++) {
			field[i][j+1] = (s[j] == '1');
		}
	}

	for (int i=1; i<=N; i++) {
		if (field[1][i]) continue;
		if (check(field, 1, i)) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}
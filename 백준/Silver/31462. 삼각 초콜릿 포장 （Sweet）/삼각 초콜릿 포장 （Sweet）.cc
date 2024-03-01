#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<string> field(N);
	for (int i=0; i<N; i++) {
		cin >> field[i];
		field[i].push_back('T');
	}

	field.push_back(string(N+1, 'T'));

	for (int i=0; i<N; i++) {
		for (int j=0; j<=i; j++) {
			if (field[i][j] == 'T') continue;
			if (field[i][j] == 'R') {
				if (field[i+1][j] != 'R' || field[i+1][j+1] != 'R') {
					cout << 0;
					return 0;
				}
				field[i+1][j] = 'T';
				field[i+1][j+1] = 'T';
			}
			if (field[i][j] == 'B') {
				if (field[i][j+1] != 'B' || field[i+1][j+1] != 'B') {
					cout << 0;
					return 0;
				}
				field[i][j+1] = 'T';
				field[i+1][j+1] = 'T';
			}
		}
	}

	cout << 1;
}
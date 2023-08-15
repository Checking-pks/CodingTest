#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, row=0, column=0;
	cin >> n;
	
	vector<string> field(n, "");

	for (int i=0; i<n; i++) {
		cin >> field[i];
		field[i].push_back('X');
	}

	field.push_back(string(n+1, 'X'));

	for (int i=0; i<=n; i++) {
		for (int j=0, stack=0; j<=n; j++) {
			if (field[i][j] == '.') {
				stack++;
			} else {
				row += (stack > 1);
				stack=0;
			}
		}
	}

	for (int i=0; i<=n; i++) {
		for (int j=0, stack=0; j<=n; j++) {
			if (field[j][i] == '.') {
				stack++;
			} else {
				column += (stack > 1);
				stack=0;
			}
		}
	}

	cout << row << " " << column;
}
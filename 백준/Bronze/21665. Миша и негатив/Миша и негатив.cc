#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <string> field;
	int r, c, result = 0;
	cin >> r >> c;

	for (int i=0; i<r; i++) {
		string s;
		cin >> s;
		field.push_back(s);
	}

	for (int i=0; i<r; i++) {
		string s;
		cin >> s;

		for (int j=0; j<c; j++) {
			result += (field[i][j] == s[j]);
		}
	}

	cout << result;
}
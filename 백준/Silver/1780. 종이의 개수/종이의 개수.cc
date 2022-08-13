#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field(2187, vector<int>(2187));
vector<int> result  = {0, 0, 0};

void checkField(int length, pair<int, int> pos) {
	int fieldColor = field[pos.first][pos.second];
	
	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) {
			if (fieldColor != field[pos.first + i][pos.second + j]) {
				checkField(length/3, {pos.first, pos.second});
				checkField(length/3, {pos.first + length/3, pos.second});
				checkField(length/3, {pos.first + length/3*2, pos.second});

				checkField(length/3, {pos.first, pos.second + length/3});
				checkField(length/3, {pos.first + length/3, pos.second + length/3});
				checkField(length/3, {pos.first + length/3*2, pos.second + length/3});

				checkField(length/3, {pos.first, pos.second + length/3*2});
				checkField(length/3, {pos.first + length/3, pos.second + length/3*2});
				checkField(length/3, {pos.first + length/3*2, pos.second + length/3*2});

				return;
			}
		}
	}	

	if (fieldColor == -1)
		result[0]++;
	else if (fieldColor == 0)
		result[1]++;
	else
		result[2]++;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int length;
	cin >> length;

	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) {
			int num;
			cin >> num;

			field[i][j] = num;
		}
	}

	checkField(length, {0, 0});
	
	cout << result[0] << "\n" << result[1] << "\n" << result[2];
	
    return 0;
}
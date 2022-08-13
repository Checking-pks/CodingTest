#include <iostream>
#include <vector>

using namespace std;

void checkField(vector<vector<bool>> field, pair<int, int>& result, int length, pair<int, int> pos) {
	bool fieldColor = field[pos.first][pos.second];
	
	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) {
			if (fieldColor != field[pos.first + i][pos.second + j]) {
				checkField(field, result, length/2, {pos.first, pos.second});
				checkField(field, result, length/2, {pos.first, pos.second + length/2});
				checkField(field, result, length/2, {pos.first + length/2, pos.second});
				checkField(field, result, length/2, {pos.first + length/2, pos.second + length/2});

				return;
			}
		}
	}

	if (fieldColor)
		result.second++;
	else
		result.first++;
}


int main() {
	int length;
	cin >> length;
	
	vector<vector<bool>> field(length, vector<bool>(length));
	pair<int, int> result  = {0, 0};

	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) {
			int num;
			cin >> num;

			field[i][j] = num;
		}
	}

	checkField(field, result, length, {0, 0});
	
	cout << result.first << "\n" << result.second;
	
    return 0;
}
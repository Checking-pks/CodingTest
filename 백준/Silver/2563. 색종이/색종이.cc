#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> field(101, vector<bool>(101, false));

int main() {
	int num, result = 0;
	cin >> num;

	for (int i=0, x, y; i<num; i++) {
		cin >> x >> y;

		for (int j=0; j<10; j++) 
			for (int k=0; k<10; k++)
				field[x+j][y+k] = true;
	}

	for (int i=1; i<=100; i++)
		for (int j=1; j<=100; j++)
			result += field[i][j];

	cout << result;
}
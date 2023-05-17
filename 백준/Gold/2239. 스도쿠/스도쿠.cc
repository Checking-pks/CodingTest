#include <iostream>
#include <vector>

using namespace std;

vector<string> field(9, "");

bool checkNum(int x, int y, char num) {
	for (int i=0; i<9; i++) {
		if (field[x][i] == num) 
			return false;

		if (field[i][y] == num) 
			return false;

		if (field[x/3*3+i/3][y/3*3+i%3] == num) 
			return false;
	}

	return true;
}

bool solveSudoku() {
    for (int x = 0; x < 9; x++) {
        for (int y = 0; y < 9; y++) {
            if (field[x][y] == '0') {
                for (char num = '1'; num <= '9'; num++) {
                    if (checkNum(x, y, num)) {
                        field[x][y] = num;

                        if (solveSudoku()) {
                            return true;
                        }

                        field[x][y] = '0';
                    }
                }

                return false;
            }
        }
    }

    return true;
}

int main() {
    for (int i = 0; i < 9; i++)
        cin >> field[i];

    if (solveSudoku()) {
        for (int i = 0; i < 9; i++)
            cout << field[i] << "\n";
    }

    return 0;
}
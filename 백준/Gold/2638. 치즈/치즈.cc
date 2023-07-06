#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field;

void setFreshAir(int xPos, int yPos) {
	if (xPos > 1 && !field[xPos-1][yPos]) {
		field[xPos-1][yPos] = -1;
		setFreshAir(xPos-1, yPos);
	}

	if (xPos < field.size()-1 && !field[xPos+1][yPos]) {
		field[xPos+1][yPos] = -1;
		setFreshAir(xPos+1, yPos);
	}

	if (yPos > 1 && !field[xPos][yPos-1]) {
		field[xPos][yPos-1] = -1;
		setFreshAir(xPos, yPos-1);
	}

	if (yPos < field[xPos].size()-1 && !field[xPos][yPos+1]) {
		field[xPos][yPos+1] = -1;
		setFreshAir(xPos, yPos+1);
	}
}

void setCheeseMelts(int xPos, int yPos) {
	int meltValue = 0;
	meltValue += (field[xPos-1][yPos] == -1);
	meltValue += (field[xPos+1][yPos] == -1);
	meltValue += (field[xPos][yPos-1] == -1);
	meltValue += (field[xPos][yPos+1] == -1);

	if (meltValue > 1) field[xPos][yPos] = 0;
}

void fieldOutput() {
	cout << "\n";
	for (int i=0; i<field.size(); i++) {
		for (int j=0; j<field[i].size(); j++) {
			switch (field[i][j]) {
				case -1:
					cout << "⚪\t";
					break;
				case 0:
					cout << "⚫\t";
					break;
				case 1:
					cout << "🟡\t";
					break;
			}
		}
		cout << "\n";
	}
}

int main() {
	// input
	bool isCheese = true;
	int r, c, result = -1;
	cin >> r >> c;

	// default field setting
	field = vector<vector<int>>(r + 2, vector<int>(c + 2, -1));
	
	for (int i=1; i<=r; i++) 
		for (int j=1; j<=c; j++) 
			cin >> field[i][j];

	for (int i=0; i<field.size(); i++) 
		for (int j=0; j<field[i].size(); j++) 
			if (field[i][j] == -1)
				setFreshAir(i, j);
	
	// simulation
	while (isCheese) {
		isCheese = false;
		result++;

		// fieldOutput();

		for (int i=0; i<field.size(); i++) {
			for (int j=0; j<field[i].size(); j++) {
				if (field[i][j] == 1) {
					isCheese = true;
					setCheeseMelts(i, j);
				}
			}
		}

		for (int i=0; i<field.size(); i++) {
			for (int j=0; j<field[i].size(); j++) {
				if (field[i][j] == -1) {
					setFreshAir(i, j);
				}
			}
		}
	}

	cout << result;
}
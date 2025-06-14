#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> field(10, vector<string>(10));

bool isSet() {
	for (int i=0; i<10; i++) {
		bool set = true;
		
		for (int j=1; set && j<10; j++) 
			if (field[i][j] != field[i][0])
				set = false;

		if (set) return true;
	}

	for (int i=0; i<10; i++) {
		bool set = true;

		for (int j=1; set && j<10; j++)
			if (field[j][i] != field[0][i])
				set = false;

		if (set) return true;
	}

	return false;
}

int main() {
	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++)
			cin >> field[i][j];

	cout << isSet();
}
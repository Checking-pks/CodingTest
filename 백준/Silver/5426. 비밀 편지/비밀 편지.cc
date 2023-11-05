#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string now;
		cin >> now;

		int size = sqrt(now.size());
		vector<vector<char>> sList(size, vector<char>(size, '0'));

		for (int i=0; i<size; i++) 
			for (int j=size-1; j>=0; j--)
				sList[j][i] = now[i*size+(size-j)-1];

		for (int i=0; i<size; i++)
			for (int j=0; j<size; j++)
				cout << sList[i][j];

		cout << "\n";
	}
}
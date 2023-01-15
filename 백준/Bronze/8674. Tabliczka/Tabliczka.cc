#include <iostream>

using namespace std;

int main() {
	long long row, column;
	cin >> row >> column;

	if (!(row & 1) || !(column & 1))
		cout << 0;
	else
		cout << ((row < column) ? row : column);
}
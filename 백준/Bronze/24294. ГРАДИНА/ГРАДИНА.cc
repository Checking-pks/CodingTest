#include <iostream>

using namespace std;

int main() {
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	cout << ((r1 > r2 ? r1 : r2) + (c1 + c2)) * 2 + 4;
}
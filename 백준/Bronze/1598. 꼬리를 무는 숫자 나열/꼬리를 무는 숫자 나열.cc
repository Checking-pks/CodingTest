#include <iostream>

using namespace std;

int main() {
	int n1, n2, x, y;
	pair<int, int> p1, p2;
	cin >> n1 >> n2;

	p1 = {--n1 / 4, n1 % 4};
	p2 = {--n2 / 4, n2 % 4};

	x = p1.first - p2.first;
	y = p1.second - p2.second;

	if (x < 0) x = -x;
	if (y < 0) y = -y;
	
	cout << x + y;
}
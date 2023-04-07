#include <iostream>

using namespace std;

int main() {
	int num, r = 2;
	cin >> num;

	while (num--)
		r += r - 1;

	cout << r * r;
}
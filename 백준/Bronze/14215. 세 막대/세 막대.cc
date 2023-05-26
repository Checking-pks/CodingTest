#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b) swap(a, b);
	if (a < c) swap(a, c);

	cout << (a < b + c ? a : b + c -1) + b + c;
}
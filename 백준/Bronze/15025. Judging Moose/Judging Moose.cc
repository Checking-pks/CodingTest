#include <iostream>

using namespace std;

int main() {
	int left, right;
	cin >> left >> right;

	if (left + right == 0) {
		cout << "Not a moose";
		return 0;
	}
	
	cout << ((left == right) ? "Even" : "Odd") << " "
		<< (left > right ? left : right) * 2;
}
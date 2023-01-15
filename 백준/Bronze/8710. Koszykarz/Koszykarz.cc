#include <iostream>

using namespace std;

int main() {
	int height, require, lump;
	cin >> height >> require >> lump;

	if (height >= require)
		cout << 0;
	else {
		double times = 1.0 * (require - height) / lump;
		cout << int(times) + (times != int(times));
	}
}
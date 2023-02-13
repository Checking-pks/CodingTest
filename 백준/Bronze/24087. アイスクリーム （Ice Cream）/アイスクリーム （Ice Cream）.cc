#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int want, basic, add, result = 0;
	cin >> want >> basic >> add;

	result = want - basic;

	if (want-basic <= 0) cout << 250;
	else cout << 250 + ceil(1.0f*(want-basic)/add) * 100;
}
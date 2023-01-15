#include <iostream>

using namespace std;

int main() {
	double max, snowball, result = 0;
	cin >> max >> snowball;

	if (snowball + snowball/2 + snowball/4 <= max)
		result = snowball + snowball/2 + snowball/4;
	if (snowball*2 + snowball + snowball/2 <= max)
		result = snowball*2 + snowball + snowball/2;
	if (snowball*4 + snowball*2 + snowball <= max)
		result = snowball*4 + snowball*2 + snowball;

	cout << int(result * 1000);
}
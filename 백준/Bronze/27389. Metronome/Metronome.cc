#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);

	float num;
	cin >> num;
	cout << num / 4;
}
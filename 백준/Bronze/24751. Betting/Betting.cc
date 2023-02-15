#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(4);

	float percent;
	cin >> percent;

	cout << 1/percent*100 << "\n" << 1/(100-percent)*100;
}
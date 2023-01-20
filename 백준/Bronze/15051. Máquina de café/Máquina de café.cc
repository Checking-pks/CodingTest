#include <iostream>

using namespace std;

int main() {
	int f1, f2, f3, t1, t2, t3;
	int min = 6000;
	
	cin >> f1 >> f2 >> f3;

	t1 = 2 * (f2 + f3 * 2);
	t2 = 2 * (f1 + f3);
	t3 = 2 * (f1 * 2 + f2);

	if (min > t1) min = t1;
	if (min > t2) min = t2;
	if (min > t3) min = t3;

	cout << min;
}
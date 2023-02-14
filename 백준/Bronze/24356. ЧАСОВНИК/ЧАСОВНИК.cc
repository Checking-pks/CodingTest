#include <iostream>

using namespace std;

int main() {
	int h1, m1, h2, m2;
	int t1, t2, total;
	cin >> h1 >> m1 >> h2 >> m2;

	t1 = h1 * 60 + m1;
	t2 = h2 * 60 + m2;
	total = t2 - t1;

	if (total < 0) total += 24 * 60;

	cout << total << " " << total/30;
}
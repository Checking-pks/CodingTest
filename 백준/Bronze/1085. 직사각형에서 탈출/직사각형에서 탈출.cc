#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y, w, h;
	int list[4];
	int min = 1001;

	cin >> x >> y >> w >> h;

	list[0] = w - x;
	list[1] = x;
	list[2] = h - y;
	list[3] = y;

	for (int i = 0; i < 4; i++) {
		if (min > list[i]) {
			min = list[i];
		}
	}

	cout << min;
}
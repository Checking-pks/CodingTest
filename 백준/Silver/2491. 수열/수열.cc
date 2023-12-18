#include <iostream>

using namespace std;

int main() {
	int n, up=1, down=1, last;
	cin >> n >> last;

	for (int i=1, now, upStack=1, downStack=1; i<n; i++) {
		cin >> now;

		if (last <= now) upStack++;
		else upStack = 1;

		if (last >= now) downStack++;
		else downStack = 1;

		up = max(up, upStack);
		down = max(down, downStack);

		last = now;
	}

	cout << max(up, down);
}
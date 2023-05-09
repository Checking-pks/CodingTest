#include <iostream>

using namespace std;

int main() { 
	int n, l, d;
	cin >> n >> l >> d;

	int songTime = l, ringTime = 0;

	while (n--) {
		while (songTime > ringTime)
			ringTime += d;

		if (songTime <= ringTime && ringTime < songTime + 5) {
			break;
		} else if (songTime < ringTime +1 && ringTime +1 <= songTime +5) {
			break;
		}

		songTime += 5 + l;
	}

	cout << ringTime;
}
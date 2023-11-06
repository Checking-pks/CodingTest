#include <iostream>

using namespace std;

int main() {
	int yt, yj;
	cin >> yt >> yj;
	for (int i=0; yt<5&&yj<5; i++) {
		if (i&1) yt += yj;
		else yj += yt;
	}

	if (yt > 4) cout << "yj";
	else cout << "yt";
}
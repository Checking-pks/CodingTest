#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, x=0, y=0;
	string s;
	cin >> n >> s;

	for (int i=0; i<n; i++) {
		if (s[i] == 'N') y++;
		if (s[i] == 'E') x++;
		if (s[i] == 'S') y--;
		if (s[i] == 'W') x--;
	}

	cout << abs(x) + abs(y);
}
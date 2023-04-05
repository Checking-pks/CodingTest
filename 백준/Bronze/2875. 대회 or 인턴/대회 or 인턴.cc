#include <iostream>

using namespace std;

int main() {
	int w, m, i, team;
	cin >> w >> m >> i;

	team = min(w/2, m);

	i -= w - team * 2 + m - team;
	if (i > 0) team -= (i + 2) / 3;
	
	cout << team;
}
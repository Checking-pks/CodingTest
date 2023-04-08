#include <iostream>

using namespace std;

int main() {
	int hole;
	cin >> hole;

	if (hole == 0) cout << 1;
	else if (hole == 1) cout << 0;
	else {
		if (hole & 1) cout << 4;

		for (int i=0; i<hole/2; i++)
			cout << 8;
	}
}
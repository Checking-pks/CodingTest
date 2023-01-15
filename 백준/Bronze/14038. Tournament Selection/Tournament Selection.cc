#include <iostream>

using namespace std;

int main() {
	int result = 0;

	for (int i=0; i<6; i++) {
		char r;
		cin >> r;

		if (r == 'W') result++;
	}

	if (result==5 || result==6) cout << 1;
	else if (result==3 || result==4) cout << 2;
	else if (result==1 || result==2) cout << 3;
	else cout << -1;
}
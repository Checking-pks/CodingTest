#include <iostream>

using namespace std;

int main() {
	int p[4];
	int x, y, r;
	cin >> p[0] >> p[1] >> p[2] >> p[3];
	cin >> x >> y >> r;

	for (int i=0; i<5; i++) {
		if (i==4) {
			cout << 0; 
			break;
		}
		
		if (p[i] == x) {
			cout << i + 1;
			break;
		}
	}
}
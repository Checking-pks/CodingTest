#include <iostream>

using namespace std;

int main() {	
	int n, s, slowest = 0;
	cin >> n >> s;

	for (int i=0,now; i<n; i++) {
		cin >> now;
		slowest = max(slowest, now);
	}

	slowest *= s;

	cout << slowest / 1000 + (slowest % 1000 != 0);
}
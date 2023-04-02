#include <iostream>

using namespace std;

int main() {
	int h, n;
	cin >> h >> n;
	
	while (n--) {
		if (h & 1) 
			h = (2 * h)^6;
		else 
			h = (h/2)^6;
	}

	cout << h;
}
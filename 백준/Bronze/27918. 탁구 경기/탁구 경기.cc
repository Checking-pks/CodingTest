#include <iostream>
using namespace std;

int main() {
	int n, d=0, p=0;
	cin >> n;
	
	while (n--) {
		char c;
		cin >> c;
		
		if (c=='D') d++;
		else p++;

		if (d-p >= 2) break;
		if (p-d >= 2) break;
	}
	
	cout << d << ":" << p;
}
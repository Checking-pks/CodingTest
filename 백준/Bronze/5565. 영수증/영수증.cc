#include <iostream>

using namespace std;

int main() {
	int total;
	cin >> total;

	for (int i=0, now; i<9; i++) {
		cin >> now;
		total -= now;
	}

	cout << total;
}
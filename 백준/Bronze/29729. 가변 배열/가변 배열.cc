#include <iostream>

using namespace std;

int main() {
	int size, add, remove;
	cin >> size >> add >> remove;

	for (int i=0, pos=0, now; i<add+remove; i++) {
		cin >> now;

		if (now) pos++;
		else pos--;

		if (size < pos) 
			size *= 2;
	}

	cout << size;
}
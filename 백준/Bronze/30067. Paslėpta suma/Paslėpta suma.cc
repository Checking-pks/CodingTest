#include <iostream>

using namespace std;

int main() {
	int num=0;
	for (int i=0, now; i<10; i++) {
		cin >> now;
		num += now;
	}

	cout << num / 2;
}
#include <iostream>

using namespace std;

int main() {
	int num, a=1, b=0;
	cin >> num;

	for (int i=0; i<num; i++) {
		int newA = b, newB = a+b;

		a = newA;
		b = newB;
	}

	cout << a << " " << b;
}
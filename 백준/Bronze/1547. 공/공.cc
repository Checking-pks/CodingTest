#include <iostream>

using namespace std;

int main() {
	int num, ball = 1;
	cin >> num;

	for (int i=0, n1, n2; i<num; i++) {
		cin >> n1 >> n2;

		if (n1 == ball) ball = n2;
		else if (n2 == ball) ball = n1;
	}

	cout << ball;
}
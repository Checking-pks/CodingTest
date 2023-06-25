#include <iostream>

using namespace std;

int main() {
	int food, result = 0;
	cin >> food;

	for (int i=0; i<food; i++) {
		int have, need, price;
		cin >> have >> need >> price;

		result += (need > have ? (need - have) * price : 0);
	}

	cout << result;
}
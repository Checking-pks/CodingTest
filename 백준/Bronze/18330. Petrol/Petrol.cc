#include <iostream>

using namespace std;

int main() {
	int need, limit;
	cin >> need >> limit;
	limit += 60;

	if (need <= limit) {
		cout << need * 1500;
	} else {
		cout << limit * 1500 + (need - limit) * 3000;
	}
}
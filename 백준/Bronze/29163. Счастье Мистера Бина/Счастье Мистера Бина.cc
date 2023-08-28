#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	for (int i=0, now; i<num; i++) {
		cin >> now;

		result += (now & 1 ? -1 : 1);
	}

	cout << (result > 0 ? "Happy" : "Sad");
}
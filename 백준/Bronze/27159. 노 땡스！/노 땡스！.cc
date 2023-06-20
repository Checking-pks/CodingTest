#include <iostream>

using namespace std;

int main() {
	int cardNum, result = 0, min = 0;
	cin >> cardNum >> min;

	for (int i=1, now, last = min; i<cardNum; i++) {
		cin >> now;

		if (last+1 == now)
			last++;
		else {
			result += min;
			min = now;
			last = now;
		}
	}

	result += min;

	cout << result;
}
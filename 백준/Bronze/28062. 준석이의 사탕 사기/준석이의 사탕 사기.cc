#include <iostream>

using namespace std;

int main() {
	int candyNum, sum=0, min=1000;
	cin >> candyNum;

	while(candyNum--) {
		int nowNum;
		cin >> nowNum;

		sum += nowNum;

		if (nowNum & 1 && min > nowNum)
			min = nowNum;
	}

	cout << sum - (sum&1 ? min : 0);
}
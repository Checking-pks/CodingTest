#include <iostream>

using namespace std;

int main() {
	int callNum;
	cin >> callNum;

	int yPrice = 0, mPrice = 0;

	for (int i=0; i<callNum; i++) {
		int nowCallTime;
		cin >> nowCallTime;

		yPrice += (nowCallTime + 30) / 30 * 10;
		mPrice += (nowCallTime + 60) / 60 * 15;
	}

	string result = "";

	if (yPrice < mPrice)
		cout << "Y " << yPrice;
	else if (yPrice == mPrice)
		cout << "Y M " << yPrice;
	else
		cout << "M " << mPrice;
}
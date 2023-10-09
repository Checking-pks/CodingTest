#include <iostream>

using namespace std;

int main() {
	int resultNum = 201, nowNum;
	string resultName = "", nowName;

	while (cin >> nowName >> nowNum) {
		if (resultNum > nowNum) {
			resultNum = nowNum;
			resultName = nowName;
		}
	}

	cout << resultName;
}
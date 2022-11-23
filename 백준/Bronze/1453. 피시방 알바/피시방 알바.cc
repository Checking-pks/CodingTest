#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<bool> seat(101, false);
	int num, result = 0;

	cin >> num;

	for (int i=0, nowNum; i<num; i++) {
		cin >> nowNum;

		if (seat[nowNum])
			result++;
		else
			seat[nowNum] = true;
	}

	cout << result;
}
#include <iostream>

using namespace std;

int main() {
	int student, result = 0;
	cin >> student;

	for (int i=1, nowNum; i<=student; i++) {
		cin >> nowNum;
		result += (i != nowNum);
	}

	cout << result;
}
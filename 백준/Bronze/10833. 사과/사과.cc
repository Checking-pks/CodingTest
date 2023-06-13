#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	while (num--) {
		int student, apple;
		cin >> student >> apple;

		result += apple % student;
	}

	cout << result;
}
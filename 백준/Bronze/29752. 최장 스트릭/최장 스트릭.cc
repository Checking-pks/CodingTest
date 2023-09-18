#include <iostream>

using namespace std;

int main() {
	int day, stack=0, result=0;
	cin >> day;

	for (int i=0, num; i<day; i++) {
		cin >> num;
		if (num) stack++;
		else {
			result = max(result, stack);
			stack=0;
		}
	}

	result = max(result, stack);
	cout << result;
}
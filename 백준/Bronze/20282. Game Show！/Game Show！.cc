#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, value = 100, result = 100;
	cin >> num;

	for (int i=0, now; i<num; i++) {
		cin >> now;
		value += now;

		result = max(result, value);
	}

	cout << result;
}
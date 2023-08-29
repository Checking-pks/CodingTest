#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int num;
	cin >> num;

	for (int i=0, now; i<num; i++) {
		cin >> now;
		result = max(result, now);
	}

	cout << result;
}
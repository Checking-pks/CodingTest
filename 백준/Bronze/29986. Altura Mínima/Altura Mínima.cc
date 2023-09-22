#include <iostream>

using namespace std;

int main() {
	int num, height, result = 0;
	cin >> num >> height;

	for (int i=0, now; i<num; i++) {
		cin >> now;
		result += (height >= now);
	}

	cout << result;
}
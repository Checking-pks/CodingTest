#include <iostream>

using namespace std;

int main() {
	int a, k, result=0;
	cin >> a >> k;

	while (a != k) {
		result++;

		if (k&1) k--;
		else if (k/2 >= a) k /= 2;
		else k--;
	}

	cout << result;
}
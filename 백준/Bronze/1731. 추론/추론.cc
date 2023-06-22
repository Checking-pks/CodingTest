#include <iostream>

using namespace std;

int main() {
	int n, n1, n2, n3, isSum;
	cin >> n >> n1 >> n2 >> n3;

	int value;

	if (n2 + (n2-n1) == n3) {
		value = n2-n1;
		isSum = true;
	}
	else {
		value = n2 / n1;
		isSum = false;
	}

	for (int i=3; i<n; i++) 
		cin >> n3;

	if (isSum)
		cout << n3 + value;
	else
		cout << n3 * value;
}
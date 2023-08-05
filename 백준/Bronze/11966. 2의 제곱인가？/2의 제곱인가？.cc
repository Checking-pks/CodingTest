#include <iostream>

using namespace std;

int main() {
	int n, t=1;
	cin >> n;

	while (n > t)
		t <<= 1;

	cout << (n == t);
}

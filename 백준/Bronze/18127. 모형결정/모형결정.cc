#include <iostream>

using namespace std;

int main() {
	int a, b;
	long long result=0;
	cin >> a >> b;

	for (int i=0, now=1; i<=b; i++) {
		result += now;
		now += (a - 2);
	}

	cout << result;
}
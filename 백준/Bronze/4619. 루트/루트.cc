#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int b, n;
	cin >> b >> n;

	while (b + n) {
		int a=1000000;

		for (int i=1; i<1000000; i++) {
			if (abs(pow(i, n) - b) < abs(pow(a, n) - b))
				a = i;
			else if (pow(i, n) > b)
				break;
		}

		cout << a << "\n";
		cin >> b >> n;
	}
}
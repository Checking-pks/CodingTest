#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << "Data set: " << a << " " << b << " " << c << "\n";

		for (int j=0; j<c; j++) {
			if (a < b) {
				int n = a;
				a = b;
				b = n;
			}

			a /= 2;
		}

		if (a < b) {
			int n = a;
			a = b;
			b = n;
		}

		cout << a << " " << b << "\n\n";
	}
}
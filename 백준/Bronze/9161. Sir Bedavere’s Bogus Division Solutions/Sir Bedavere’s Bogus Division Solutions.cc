#include <iostream>

using namespace std;

int main() {
	for (int i=100; i<=999; i++) {
		for (int j=100; j<=999; j++) {
			if (i%10 != j/100) continue;
			
			int a = i / 10, b = j % 100;

			if (a == b) continue;
				
			if (1.0 * i / j == 1.0 * a / b)
				cout << i << " / " << j << " = " << a << " / " << b << "\n";
		}
	}
}
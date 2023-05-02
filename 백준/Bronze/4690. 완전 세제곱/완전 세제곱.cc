#include <iostream>
#include <cmath>

using namespace std;

int main() {
	for (int a=1; a<=100; a++) {
		for (int b=2; b<=100; b++) {
			for (int c=b; c<=100; c++) {
				for (int d=c; d<=100; d++) {
					if (a * a * a == b * b * b + c * c * c + d * d * d) {
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")\n";
					}
				}
			}
		}
	}
}
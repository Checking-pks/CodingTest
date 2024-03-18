#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double Convert(double degree) {
	double pi = 3.14159265359;
	return (degree * (pi / 180));
}

int main() {
	int N;
	cin >> N;

	while (N--) {
		double T, X;
		cin >> T >> X;

		double tanX = tan(Convert(X));
		double sinX = sin(Convert(90 - X));
		double collisionLength = .425 / tanX;
		double tMin = (.425 - .16 / sinX) / tanX;
		double tMax = (.425 + .16 / sinX) / tanX;

		bool isHit = false;
		for (int i=1; !isHit && i*collisionLength < T + tMax; i+=2) {
			if (collisionLength * i + tMin < T &&
				collisionLength * i + tMax > T)
				isHit = true;
		}

		cout << (isHit ? "yes\n" : "no\n");
	}
}
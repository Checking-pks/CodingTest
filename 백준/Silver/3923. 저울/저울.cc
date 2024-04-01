#include <iostream>

using namespace std;

int a, b, d;

bool isChange(int a1, int b1, int a2, int b2) {
	if (!a1 & !b1) return true;
	if (a1 + b1 != a2 + b2)
		return a1 + b1 > a2 + b2;
	return (a1*a + b1*b > a2*a + b2*b);
}

int main() {
	cin >> a >> b >> d;

	while (a | b | d) {
		int aCount=0, bCount=0;

		for (int i=0; i<=50000; i++) {
			if ((a*i + d) % b == 0) {
				if (isChange(aCount, bCount, i, (a*i + d) / b)) {
					aCount = i;
					bCount = (a*i + d) / b;
				}
			}
			
			if ((b*i + d) % a == 0) {
				if (isChange(aCount, bCount, (b*i + d) / a, i)) {
					aCount = (b*i + d) / a;
					bCount = i;
				}
			}

			if ((d - b*i) % a == 0) {
				if (d - b*i < 0) continue;
				if (isChange(aCount, bCount, (d - b*i) / a, i)) {
					aCount = (d - b*i) / a;
					bCount = i;
				}
			}
		}

		cout << aCount << " " << bCount << "\n";
		
		cin >> a >> b >> d;
	}
}
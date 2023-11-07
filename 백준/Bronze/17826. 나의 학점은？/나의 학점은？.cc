#include <iostream>

using namespace std;

int main() {
	int ap, az, bp, bz, cp, cz, score;

	for (int i=1, now; i<=50; i++) {
		cin >> now;

		if (i==5)  ap = now;
		if (i==15) az = now;
		if (i==30) bp = now;
		if (i==35) bz = now;
		if (i==45) cp = now;
		if (i==48) cz = now;
	}

	cin >> score;

	if (score >= ap) cout << "A+";
	else if (score >= az) cout << "A0";
	else if (score >= bp) cout << "B+";
	else if (score >= bz) cout << "B0";
	else if (score >= cp) cout << "C+";
	else if (score >= cz) cout << "C0";
	else cout << "F";
}
#include <iostream>

using namespace std;

int main() {
    int num, max=0;
	cin >> num;

	for (int i=0; i<num; i++) {
		int a, d, g, score;
		cin >> a >> d >> g;

		score = a*(d+g) * ((a==d+g) ? 2 : 1);

		if (max<score) max=score;
	}

	cout << max;
}
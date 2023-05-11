#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, w, h;
	cin >> n >> w >> h;

	double diagonalLength = sqrt(w * w + h * h);

	while (n--) {
		int num;
		cin >> num;

		cout << (diagonalLength >= num ? "DA\n" : "NE\n");
	}
}
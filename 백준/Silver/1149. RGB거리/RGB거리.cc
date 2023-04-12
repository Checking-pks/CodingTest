#include <iostream>

using namespace std;

int main() {
	int n, r=0, g=0, b=0;
	cin >> n;

	while (n--) {
		int nowR, nowG, nowB;
		cin >> nowR >> nowG >> nowB;

		nowR += min(g, b);
		nowG += min(r, b);
		nowB += min(r, g);
		
		r = nowR;
		g = nowG;
		b = nowB;
	}

	cout << min(min(r, g), b);
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float D, H, W, x, y;
	cin >> D >> H >> W;

	x = sqrt(D*D * H*H / (H*H + W*W));
	y = x * W / H;

	cout << floor(x) << " " << floor(y);
}
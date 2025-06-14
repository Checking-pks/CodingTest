#include <iostream>

using namespace std;

int main() {
	int H, W, N, M;
	cin >> H >> W >> N >> M;
	
	int R = (H + N) / (N + 1);
	int C = (W + M) / (M + 1);
	
	cout << R * C;
}
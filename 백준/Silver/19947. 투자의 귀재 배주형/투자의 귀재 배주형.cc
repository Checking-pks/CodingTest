#include <iostream>

using namespace std;

int dp(int have, int year) {
	if (year < 0) return 0;
	if (year == 0) return have;
	
	return max(dp(have, year-1)*105/100, max(dp(have, year-3)*120/100, dp(have, year-5)*135/100));
}

int main() {
	int H, Y;
	cin >> H >> Y;
	cout << dp(H, Y);
}
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> numList;

int dp(int have, int year) {
	if (numList.find(year) != numList.end()) return numList[year];
	if (year < 0) return 0;
	if (year == 0) return have;

	int now = max(dp(have, year-1)*105/100, max(dp(have, year-3)*120/100, dp(have, year-5)*135/100));
	numList[year] = now;
	return now;
}

int main() {
	int H, Y;
	cin >> H >> Y;
	cout << dp(H, Y);
}
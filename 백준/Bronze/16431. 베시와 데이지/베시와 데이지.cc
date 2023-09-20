#include <iostream>
#include <cmath>

using namespace std;

int main() {
	pair<int, int> bPos, dPos, tPos;
	cin >> bPos.first >> bPos.second
		>> dPos.first >> dPos.second
		>> tPos.first >> tPos.second;

	int bTime = min(abs(tPos.first - bPos.first), abs(tPos.second - bPos.second));
	bTime += abs(tPos.first - bPos.first) - bTime + abs(tPos.second - bPos.second) - bTime;
	int dTime = abs(tPos.first - dPos.first) + abs(tPos.second - dPos.second);

	if (bTime < dTime) cout << "bessie";
	else if (bTime > dTime) cout << "daisy";
	else cout << "tie";
}
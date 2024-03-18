#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1001;

bool canDoIt(vector<pair<int, int>> &pos, int xMin, int xMax, int yMin, int yMax) {
	for (int i=0; i<pos.size(); i++) {
		int x = pos[i].first;
		int y = pos[i].second;

		if (x == xMin || x == xMax) 
			if (yMin <= y && y <= yMax) 
				continue;

		if (y == yMin || y == yMax) 
			if (xMin <= x && x <= xMax) 
				continue;

		return false;
	}

	return true;
}

int main() {
	int N;
	cin >> N;

	int xMin = MAX, xMax = -MAX;
	int yMin = MAX, yMax = -MAX;

	vector<pair<int, int>> pos(N);

	for (int i=0; i<N; i++) {
		cin >> pos[i].first >> pos[i].second;
		xMin = min(xMin, pos[i].first);
		xMax = max(xMax, pos[i].first);
		yMin = min(yMin, pos[i].second);
		yMax = max(yMax, pos[i].second);
	}

	int result;
	if (xMax - xMin > yMax - yMin) {
		result = xMax - xMin;
		if (!canDoIt(pos, xMin, xMax, yMin, yMin + result) &&
			!canDoIt(pos, xMin, xMax, yMax - result, yMax))
			result = -1;
	} else {
		result = yMax - yMin;
		if (!canDoIt(pos, xMin, xMin + result, yMin, yMax) &&
			!canDoIt(pos, xMax - result, xMax, yMin, yMax))
			result = -1;
	}

	cout << result;
}
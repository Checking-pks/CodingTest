#include <iostream>
#include <vector>

using namespace std;

int main() {
	pair<int, int> center = {10000, 10000}, xAxis = {0, 0}, yAxis = {0, 0};
	vector<vector<bool>> field(20001, vector<bool>(20001));
	
	int N, result=0;
	cin >> N;
	for (int i=0, x, y; i<N; i++) {
		cin >> x >> y;
		
		if (field[center.first + x][center.second + y])
			continue;

		if (x == 0) {
			if (y > 0) {
				if (!yAxis.second) {
					yAxis.second = y;
					result++;
				} else if (y < yAxis.second) {
					yAxis.second = y;
				}
			} else {
				if (!yAxis.first) {
					yAxis.first = y;
					result++;
				} else if (y > yAxis.first) {
					yAxis.first = y;
				}
			}

			continue;
		}

		if (y == 0) {
			if (x > 0) {
				if (!xAxis.second) {
					xAxis.second = x;
					result++;
				} else if (x < xAxis.second) {
					xAxis.second = x;
				}
			} else {
				if (!xAxis.first) {
					xAxis.first = x;
					result++;
				} else if (x > xAxis.first) {
					xAxis.first = x;
				}
			}

			continue;
		}
		
		result++;

		for (int j=2; true; j++) {
			if (-10000 > x*j || x*j > 10000) break;
			if (-10000 > y*j || y*j > 10000) break;
			if (field[center.first + x * j][center.second + y * j]) {
				result--;
				break;
			}
			field[center.first + x * j][center.second + y * j] = true;
		}
	}

	cout << result;
}
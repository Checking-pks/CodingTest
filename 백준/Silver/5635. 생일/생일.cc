#include <iostream>

using namespace std;

int main() {
	string minName, maxName;
	int num, min = 20110101, max = 19890101;
	cin >> num;

	for (int i=0; i<num; i++) {
		string name;
		int d, m, y, time;
		cin >> name >> d >> m >> y;

		time = y * 10000 + m * 100 + d;

		if (min > time) {
			min = time;
			minName = name;
		}

		if (max < time) {
			max = time;
			maxName = name;
		}
	}

	cout << maxName << "\n" << minName;
}
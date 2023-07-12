#include <iostream>

using namespace std;

int main() {
	int result[5] = {0,};
	int spot;
	cin >> spot;

	for (int i=0, x, y; i<spot; i++) {
		cin >> x >> y;

		if (!x || !y) {
			result[4]++;
			continue;
		}
		
		if (x>0) {
			if (y>0) result[0]++;
			else result[3]++;
		} else {
			if (y>0) result[1]++;
			else result[2]++;
		}
	}

	cout << "Q1: " << result[0] << "\n"
		<< "Q2: " << result[1] << "\n"
		<< "Q3: " << result[2] << "\n"
		<< "Q4: " << result[3] << "\n"
		<< "AXIS: " << result[4];
}
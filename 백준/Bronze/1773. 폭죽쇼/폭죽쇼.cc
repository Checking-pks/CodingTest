#include <iostream>
#include <vector>

using namespace std;

int main() {
	int student, endTime, result = 0;
	cin >> student >> endTime;

	vector<bool> firecracker(endTime+1, false);

	for (int i=0, time; i<student; i++) {
		cin >> time;

		for (int i=time; i <= endTime; i += time) {
			firecracker[i] = true;
		}
	}

	for (int i=1; i<=endTime; i++)
		result += firecracker[i];

	cout << result;
}
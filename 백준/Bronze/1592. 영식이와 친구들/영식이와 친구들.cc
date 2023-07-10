#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, max, range;
	cin >> num >> max >> range;

	vector<int> numList(num, 0);

	for (int i=0, time=0; true; time++) {
		if (++numList[i%num] >= max) {
			cout << time;
			break;
		}
		
		if (numList[i%num] & 1)
			i += range;
		else
			i -= range;
	}
}
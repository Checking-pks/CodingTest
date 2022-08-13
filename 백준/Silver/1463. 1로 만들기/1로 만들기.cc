#include <iostream>
#include <vector>

using namespace std;

void calcTimes(vector<int>& numTimes, int num, int times) {
	if (times > 30 || num >= numTimes.size() || numTimes[num] <= times)
		return;
	else
		numTimes[num] = times;

	calcTimes(numTimes, num * 3, times + 1);
	calcTimes(numTimes, num + 1, times + 1);
	calcTimes(numTimes, num * 2, times + 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	
	vector<int> numTimes(num + 1, num);

	calcTimes(numTimes, 3, 1);
	calcTimes(numTimes, 2, 1);
	
	numTimes[1] = 0;

	cout << numTimes.back();
	
	return 0;
}
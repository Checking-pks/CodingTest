#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<int, int> count;
	int sum = 0, manyNum, max=0;

	for (int i=0, num; i<10; i++) {
		cin >> num;

		sum += num;
		count[num]++;
	}

	for (pair<int, int> num:count) {
		if (max < num.second) {
			manyNum = num.first;
			max = num.second;
		}
	}

	cout << sum / 10 << "\n" << manyNum;
}
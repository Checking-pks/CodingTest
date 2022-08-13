#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numList, times;
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		int nowNum;
		cin >> nowNum;

		numList.push_back(nowNum);
	}

	for (int i=0; i<num; i++) {
		int maxTimes = 0;

		for (int j=i-1; j>=0; j--) 
			if (numList[i] > numList[j] && maxTimes < times[j])
				maxTimes = times[j];

		times.push_back(maxTimes + 1);
	}

	int result = 0;

	for (int t:times) 
		if (result < t)
			result = t;

	cout << result;
	
	return 0;
}
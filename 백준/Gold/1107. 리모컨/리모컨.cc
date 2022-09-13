#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<bool> buttons(11, true);
	int target, brokenButtonNum, result = 500000, times = 0;
	cin >> target >> brokenButtonNum;

	for (int i=0; i<brokenButtonNum; i++) {
		int num;
		cin >> num;

		buttons[num] = false;
	}

	while (result > times) {
		int upper100 = 100 + times, lower100 = 100 - times;

		if (upper100 == target || lower100 == target) 
			if (result > times)
				result = times;
		
		string targetUpper = to_string(target + times);
		string targetLower = to_string(target - times);

		bool isCanUpper = true, isCanLower = true;
		
		for (char c:targetUpper) {
			if (c == '-' || !buttons[c - '0']) {
				isCanUpper = false;
				break;
			}
		}

		for (char c:targetLower) {
			if (c == '-' || !buttons[c - '0']) {
				isCanLower = false;
				break;
			}
		}

		if (isCanUpper) 
			if (result > targetUpper.length() + times)
				result = targetUpper.length() + times;

		if (isCanLower) 
			if (result > targetLower.length() + times)
				result = targetLower.length() + times;

		times++;
	}

	cout << result;
}
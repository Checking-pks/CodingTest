#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
	cin >> num;

	vector<int> numList(3, 0), result(3, 0);

	for (int i=0; i<num; i++) {
		int nowNum;
		cin >> nowNum;
		
		numList.push_back(nowNum);
	}

	for (int i=3; i<numList.size(); i++) {
		int max = 0;
		
		int _2 = result[i-2];
		int _21 = result[i-3] + numList[i-1];

		if (max < _2) max = _2;
		if (max < _21) max = _21;

		result.push_back(max + numList[i]);
	}

	cout << result.back();
}
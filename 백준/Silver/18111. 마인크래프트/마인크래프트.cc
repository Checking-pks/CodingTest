#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int row, col, haveBlock;
	int resultTime = 500 * 500 * 256 * 2, resultHeight = 0;
	vector<int> blockHeight(257, 0);

	cin >> row >> col >> haveBlock;

	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			int block;
			cin >> block;

			blockHeight[block]++;
		}
	}

	for (; resultHeight<=256; resultHeight++) {
		int nowTimes = 0, nowHaveBlocks = haveBlock;

		for (int i=0; i<blockHeight.size(); i++) {
			int nowHeight = (i - resultHeight) * blockHeight[i];

			if (nowHeight < 0) 
				nowTimes -= nowHeight;
			else
				nowTimes += nowHeight * 2;
			
			nowHaveBlocks += nowHeight;
		}

		if (nowHaveBlocks >= 0 && nowTimes < resultTime) 
			resultTime = nowTimes;
		
		if (nowHaveBlocks < 0 || nowTimes > resultTime)
			break;
	}

	cout << resultTime << " " << resultHeight - 1;
	
	return 0;
}
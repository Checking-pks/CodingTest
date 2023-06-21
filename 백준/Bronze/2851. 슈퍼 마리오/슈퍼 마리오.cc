#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> score(10, 0);
	int result = 200;
	
	for (int i=0, nowScore, sum=0; i<10; i++) {
		cin >> nowScore;
		sum += nowScore;

		score[i] = sum;
	}

	for (int j=9; j>=0; j--) {
		int nowDiff = abs(100 - score[j]);
		int minDiff = abs(100 - result);
		
		if (minDiff > nowDiff) 
			result = score[j];
	}

	cout << result;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int opinionNum;
	
	cin >> opinionNum;

	if (!opinionNum) {
		cout << 0;
		return 0;
	}

	vector<int> opinions(opinionNum, 0);
	int cutNum = round(opinionNum * 0.15f), sum = 0;

	for (int i=0; i<opinionNum; i++) 
		cin >> opinions[i];

	sort(opinions.begin(), opinions.end());

	for (int i=cutNum; i<opinionNum - cutNum; i++) 
		sum += opinions[i];

	cout << round(1.f * sum / (opinionNum - 2 * cutNum));
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> numList;
pair<int, int> result = {-1000000001, 10000000001};

void simulation(int pos, vector<int> sign, int num) {
	if (pos == numList.size()) {
		result.first = max(result.first, num);
		result.second = min(result.second, num);
		return;
	}

	for (int i=0; i<4; i++) {
		if (sign[i] == 0) continue;
		vector<int> newSign = sign;
		newSign[i]--;
		int newNum = num;
		if (i==0) newNum += numList[pos];
		if (i==1) newNum -= numList[pos];
		if (i==2) newNum *= numList[pos];
		if (i==3) newNum /= numList[pos];
		
		simulation(pos+1, newSign, newNum);
	}
}

int main() {
	int n;
	cin >> n;

	numList = vector<int>(n);
	for (int i=0; i<n; i++) cin >> numList[i];
	
	vector<int> sign(4, 0);
	for (int i=0; i<4; i++) cin >> sign[i];

	simulation(1, sign, numList[0]);

	cout << result.first << "\n" << result.second;
}
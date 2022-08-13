#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutation(vector<int> numList, vector<int> nowNumList, int outputLength) {
	nowNumList.push_back(0);
	
	for (int i=0; i<numList.size(); i++) {
		if (nowNumList.size() && nowNumList[nowNumList.size() - 2] > numList[i])
			continue;

		nowNumList.back() = numList[i];
		
		if (outputLength) {
			permutation(numList, nowNumList, outputLength - 1);
		} else {
			for (int n:nowNumList)
				cout << n << " ";

			cout << "\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> numList;
	int numLength, outputLength;

	cin >> numLength >> outputLength;

	for (int i=0; i<numLength; i++) {
		int num;
		cin >> num;
		
		numList.push_back(num);
	}

	sort(numList.begin(), numList.end());

	permutation(numList, {}, outputLength - 1);

	return 0;
}
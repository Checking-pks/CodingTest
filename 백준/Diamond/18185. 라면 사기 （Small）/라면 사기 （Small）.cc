#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;
	
	vector<int> numList(N+2);
	for (int i=0; i<N; i++)
		cin >> numList[i];

	for (int i=0; i<N; i++) {
		if (numList[i+1] > numList[i+2]) {
			int two = min(numList[i], numList[i+1] - numList[i+2]);
			numList[i]   -= two;
			numList[i+1] -= two;
			result += two * 5;
		} 

		int three = min(numList[i], min(numList[i+1], numList[i+2]));
		numList[i]   -= three;
		numList[i+1] -= three;
		numList[i+2] -= three;
		result += three * 7;

		result += numList[i] * 3;
	}

	cout << result;
}
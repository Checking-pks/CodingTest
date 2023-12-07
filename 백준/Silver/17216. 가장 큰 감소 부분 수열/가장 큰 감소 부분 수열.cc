#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;

	vector<int> field(n), numList;

	for (int i=0; i<n; i++) 
		cin >> field[i];

	numList = field;
	
	for (int i=1; i<n; i++) {
		for (int j=0; j<i; j++) {
			if (field[i] < field[j]) {
				numList[i] = max(numList[i], numList[j] + field[i]);
			}
		}
		result = max(result, numList[i]);
	}
	
	cout << result;
}
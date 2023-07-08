#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	vector<int> numList(num, 0), ascend(num, 1), descend(num, 1);

	for (int i=0; i<num; i++)
		cin >> numList[i];

	for (int i=1; i<num; i++) {
		for (int j=i-1; j>=0; j--) {
			if (numList[j] < numList[i]) {
				ascend[i] = max(ascend[i], ascend[j] + 1);
			}
		}
	}

	for (int i=num-2; i>=0; i--) {
		for (int j=i+1; j<num; j++) {
			if (numList[j] < numList[i]) {
				descend[i] = max(descend[i], descend[j] + 1);
			}
		}
	}

	for (int i=0; i<num; i++) 
		result = max(result, ascend[i] + descend[i]);

	cout << result - 1;
}
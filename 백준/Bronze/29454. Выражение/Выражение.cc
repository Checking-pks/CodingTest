#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, sum=0;
	cin >> n;

	vector<int> numList(n);

	for (int i=0; i<n; i++) {
		cin >> numList[i];
		sum += numList[i];
	}

	for (int i=0; i<n; i++) {
		if (sum == numList[i] * 2) {
			cout << i+1;
			break;
		}
	}
}
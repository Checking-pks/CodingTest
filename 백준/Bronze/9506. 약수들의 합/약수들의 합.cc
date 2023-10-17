#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n != -1) {
		int sum=0;
		vector<int> numList;
		for (int i=1; i<n; i++) {
			if (n%i==0) {
				sum += i;
				numList.push_back(i);
			}
		}
		
		if (sum == n) {
			cout << n << " = " << numList[0];
			for (int i=1; i<numList.size(); i++) {
				cout << " + " << numList[i];
			}
		} else {
			cout << n << " is NOT perfect.";
		}

		cout << "\n";
		cin >> n;
	}
}
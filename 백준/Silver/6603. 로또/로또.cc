#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n) {
		vector<int> numList(n);
		for (int i=0; i<n; i++)
			cin >> numList[i];

		vector<int> chooseList(n);
		for (int i=0; i<6; i++)
			chooseList[i] = 1;

		do {
			for (int i=0; i<numList.size(); i++) {
				if (chooseList[i]) {
					cout << numList[i] << " ";
				}
			}
			cout << "\n";
		} while (prev_permutation(chooseList.begin(), chooseList.end()));
		
		cout << "\n";
		cin >> n;
	}
}
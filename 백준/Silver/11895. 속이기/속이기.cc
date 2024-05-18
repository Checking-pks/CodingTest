#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, sum = 0, minimum = 1000000;
	cin >> n;

	vector<int> nList(n), nBinary(21);
	for (int i=0; i<n; i++) {
		cin >> nList[i];

		for (int j=0; j<nBinary.size(); j++) 
			if (nList[i] & (1 << j))
				nBinary[j]++;

		sum += nList[i];
		minimum = min(minimum, nList[i]);
	}

	for (int i=0; i<nBinary.size(); i++) {
		if (nBinary[i] & 1) {
			cout << 0;
			return 0;
		}
	}

	cout << sum - minimum;
}
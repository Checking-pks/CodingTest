#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, sum=0, idx=-1;
	cin >> n;

	vector<int> field(n);

	for (int i=0; i<n; i++) {
		cin >> field[i];
		sum += field[i];
	}

	for (int i=0; i<n; i++) {
		if (idx == -1 && sum == field[i] * 2) {
			idx = i;
			continue;
		}

		cout << field[i] << " ";
	}

	cout << field[idx];
}
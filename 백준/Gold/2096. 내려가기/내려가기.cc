#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> minField(3, 0), maxField;

	cin >> minField[0] >> minField[1] >> minField[2];
	maxField = minField;

	for (int i=1; i<n; i++) {
		vector<int> nowMinField(3, 0), nowMaxField;
		cin >> nowMinField[0] >> nowMinField[1] >> nowMinField[2];
		nowMaxField = nowMinField;

		nowMinField[0] += min(minField[0], minField[1]);
		nowMinField[1] += min(min(minField[0], minField[1]), minField[2]);
		nowMinField[2] += min(minField[1], minField[2]);

		nowMaxField[0] += max(maxField[0], maxField[1]);
		nowMaxField[1] += max(max(maxField[0], maxField[1]), maxField[2]);
		nowMaxField[2] += max(maxField[1], maxField[2]);

		minField = nowMinField;
		maxField = nowMaxField;
	}

	cout << max(max(maxField[0], maxField[1]), maxField[2]) << " "
		<< min(min(minField[0], minField[1]), minField[2]);
}
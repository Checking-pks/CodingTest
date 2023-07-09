#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;

	unordered_set<int> rowGuard, colGuard;

	for (int i=0; i<r; i++) {
		string line;
		cin >> line;
		
		for (int j=0; j<c; j++) {
			if (line[j] == 'X') {
				rowGuard.insert(i);
				colGuard.insert(j);
			}
		}
	}

	cout << max(r - rowGuard.size(), c - colGuard.size());
}
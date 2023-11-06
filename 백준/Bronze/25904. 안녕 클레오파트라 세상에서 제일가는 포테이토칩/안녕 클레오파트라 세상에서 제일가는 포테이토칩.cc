#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	vector<int> numList(n, 0);
	for (int i=0; i<n; i++) cin >> numList[i];

	for (int i=0; true; i++, x++) {
		if (numList[i%n] < x) {
			cout << i%n+1;
			break;
		}
	}
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, p, now, before=0;
	cin >> n >> p;

	vector<int> numList;
	now = n;

	while (true) {
		now = (now*n)%p;

		for (int i=0; i<numList.size(); i++) {
			if (numList[i] == now) {
				cout << numList.size() - i;
				return 0;
			}
		}
		
		numList.push_back(now);
	}
}
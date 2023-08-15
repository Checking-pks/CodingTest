#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;

	vector<int> numList(n, 0);

	for (int i=0; i<n; i++) {
		cin >> numList[i];
	}

	sort(numList.begin(), numList.end(), greater<>());

	for (int i:numList)
		cout << i << "\n";
}
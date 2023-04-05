#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> numList(n, 0);

	for (int i=0; i<m; i++) {
		int a, b, k;
		cin >> a >> b >> k;

		for (int j=a-1; j<b; j++)
			numList[j] = k;
	}

	for (int i:numList)
		cout << i << " ";
}
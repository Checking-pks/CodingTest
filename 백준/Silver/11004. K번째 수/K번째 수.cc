#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num, k;
	cin >> num >> k;

	vector<int> numList(num, 0);
	
	for (int i=0; i<num; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());

	cout << numList[k-1];
}
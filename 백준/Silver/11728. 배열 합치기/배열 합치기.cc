#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n1, n2;
	cin >> n1 >> n2;

	vector<int> numList(n1 + n2, 0);
	
	for (int i=0; i<n1+n2; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());

	for (int i=0; i<n1+n2; i++)
		cout << numList[i] << " ";
}
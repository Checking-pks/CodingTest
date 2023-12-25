#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> numList(n+1, 0);

	for (int i=2; i<=n; i++) 
		numList[i] = numList[i/2] + numList[i/2 + i%2]
			+ i/2 * (i/2 + i%2);

	cout << numList[n];
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, result=0;
	cin >> n >> m;
	vector<int> numList(n, 0);

	for (int i=0, sum=0, sPos=0; i<n; i++) {
		cin >> numList[i];
		sum += numList[i];
		
		while (sum > m) sum -= numList[sPos++];
		if (sum == m)   result++;
	}

	cout << result;
}
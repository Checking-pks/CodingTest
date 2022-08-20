#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	cin >> num;

	vector<int>numList(num+1, 0);
	numList[1] = 1;
	numList[2] = 2;

	for (int i=3; i<numList.size(); i++) 
		numList[i] = (numList[i-1] + numList[i-2]) % 10007;

	cout << numList[num];

	return 0;
}
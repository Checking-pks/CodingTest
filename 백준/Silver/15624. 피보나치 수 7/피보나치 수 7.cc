#include <iostream>

using namespace std;

const int DIVISION = 1000000007;

int main(){
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}
	
	pair<int, int> numList = {0, 1};

	for (int i=1; i<n; i++)
	{
		numList = {
			numList.second % DIVISION,
			(numList.first + numList.second) % DIVISION
		};
	}

	cout << numList.second;
}
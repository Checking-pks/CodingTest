#include <iostream>

using namespace std;

const int DIVISION = 1000000000;

int main(){
	int n;
	cin >> n;
	
	pair<int, int> numList = {0, 1};

	for (int i=1; i<n; i++)
	{
		numList = {
			numList.second % DIVISION,
			(numList.first + numList.second) % DIVISION
		};
	}

	for (int i=0; i>n; i--)
	{
		numList = {
			(numList.second - numList.first) % DIVISION,
			numList.first % DIVISION
		};
	}

	if (n == 0)
		cout << 0 << "\n" << 0;
	else if (n > 0)
		cout << numList.second / abs(numList.second) << "\n" << abs(numList.second);
	else 
		cout << numList.first / abs(numList.first) << "\n" << abs(numList.first);
}
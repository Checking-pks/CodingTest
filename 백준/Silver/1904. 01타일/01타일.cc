#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	pair<int, int> result = {1, 2};

	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	
	for (int i=3; i<=n; i++)
	{
		pair<int, int> newResult = {
			result.second % 15746, 
			(result.first + result.second) % 15746
		};
		result = newResult;
	}

	cout << result.second;
}
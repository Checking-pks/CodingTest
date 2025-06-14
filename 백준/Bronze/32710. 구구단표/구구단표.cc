#include <iostream>

using namespace std;

bool solve(int N)
{
	if (1 <= N && N <= 9)
		return true;
	
	if (N > 81)
	    return false;

	for (int i = 2; i <= 9; i++)
		for (int j = i; j <= 9; j++)
			if (i * j == N)
				return true;
	return false;
}

int main()
{
	int N;
	cin >> N;
	cout << solve(N);
}
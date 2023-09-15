#include <iostream>

using namespace std;

int main() 
{
	int n, m, result=0;
	cin >> n >> m;

	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			result += (i+j==10);

	if (result == 1)
		cout << "There is 1 way to get the sum 10.";
	else
		cout << "There are " << result << " ways to get the sum 10.";
}
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; true; i++)
	{
		N -= i;
		
		if (N == 0)
		{
		    cout << (i & 1 ? 0 : i + 1);
		    return 0;
		}
		
		if (N < 0)
		{
		    cout << (i & 1 ? -N : 0);
		    return 0;
		}
	}
}
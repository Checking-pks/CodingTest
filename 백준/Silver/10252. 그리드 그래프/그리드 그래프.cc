#include <iostream>

using namespace std;

void output(int x, int y)
{
    cout << "(" << x << "," << y << ")\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	int T;
	cin >> T;

	while (T--)
	{
		int m, n;
		cin >> m >> n;

		cout << "1\n";
		
		for (int i = 0; i < m; i++)
		{
			if (i & 1)
				for (int j = n - 1; j >= 1; j--)
					output(i, j);
			else
				for (int j = 1; j < n; j++)
					output(i, j);
		}

		for (int i = m - 1; i >= 0; i--)
			output(i, 0);
	}
}
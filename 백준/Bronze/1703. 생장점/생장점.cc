#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	while (a)
	{
		int result = 1;
		
		for (int i = 0, s, l; i < a; i++)
		{
			cin >> s >> l;
			result *= s;
			result -= l;
		}

		cout << result << "\n";
		cin >> a;
	}
}
#include <iostream>

using namespace std;

int main()
{
	string S;
	cin >> S;

	bool one = 1, two = 0, three = 0;

	for (char C : S)
	{
		switch (C)
		{
			case 'A':
				swap(one, two);
				break;
			case 'B':
				swap(two, three);
				break;
			case 'C':
				swap(one, three);
				break;
		}
	}

	if (one) cout << 1;
	if (two) cout << 2;
	if (three) cout << 3;
}
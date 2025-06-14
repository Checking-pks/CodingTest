#include <iostream>

using namespace std;

int main()
{
	int M;
	cin >> M;

	bool isReverse = 0;
	int times = 1;

	for (int i = 0, a, b, s; i < M; i++)
	{
		cin >> a >> b >> s;
		times /= a;
		times *= b;

		if (s) isReverse = !isReverse;
	}

	cout << isReverse << " " << times;
}
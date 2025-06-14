#include <iostream>

using namespace std;

int main()
{
	int N, L;
	cin >> N >> L;

	int pos = 0, time = 0;
	for (int i = 0, D, R, G, T; i < N; i++)
	{
		cin >> D >> R >> G;
		
		time += D - pos;
		pos = D;
		
		T = time % (R + G);

		if (T < R) time += R - T;
	}

	cout << time + (L - pos);
}
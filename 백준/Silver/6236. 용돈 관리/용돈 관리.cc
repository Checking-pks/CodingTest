#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, l = 0, r = 0, m;
	cin >> N >> M;

	vector<int> nList(N);
	for (int i = 0; i < N; i++)
	{
		cin >> nList[i];
		l = max(l, nList[i]);
		r += nList[i];
	}
	
	while (l <= r)
	{
		m = (l + r) / 2;
		int now = 1, money = m;
		
		for (int i = 0; i < N; i++)
		{
			if (money < nList[i])
			{
				now++;
				money = m;
			}

			money -= nList[i];
		}

		if (now > M)
			l = m + 1;
		else
			r = m - 1;
	}

	cout << l;
}
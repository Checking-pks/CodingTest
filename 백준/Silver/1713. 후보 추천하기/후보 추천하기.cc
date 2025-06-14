#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int recomCount = 0;
	vector<int> recommend(101), recomTime(101);

	for (int i = 0, now; i < K; i++)
	{
		cin >> now;

		if (!recommend[now]++)
		{
			recomTime[now] = i;
			recomCount++;
		}

		if (recomCount > N)
		{
			recomCount--;

			int idx = 0, rCount = 1001, rTime = 0;
			for (int j = 1; j <= 100; j++)
			{
				if (j == now) continue;
				if (!recommend[j]) continue;

				if (rCount > recommend[j])
				{
					idx = j;
					rCount = recommend[j];
					rTime = recomTime[j];
					continue;
				}

				if (rCount == recommend[j] && rTime > recomTime[j])
				{
					idx = j;
					rTime = recomTime[j];
				}
			}

			recomTime[idx] = 0;
			recommend[idx] = 0;
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		if (!recommend[i]) continue;
		cout << i << " ";
	}
}
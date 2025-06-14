#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int getPos(vector<int>& parking)
{
	for (int i = 1; i < parking.size(); i++)
		if (!parking[i])
			return i;

	return 0;
}

int main()
{
	int N, M, result = 0;
	cin >> N >> M;

	vector<int> price(N + 1), weight(M + 1);
	for (int i = 1; i <= N; i++) cin >> price[i];
	for (int i = 1; i <= M; i++) cin >> weight[i];

	vector<int> parking(N + 1), car(M + 1);
	queue<int> waitting;
	for (int i = 0, now, pos; i < M * 2; i++)
	{
		cin >> now;

		if (now > 0)
		{
			pos = getPos(parking);

			if (!pos)
			{
				waitting.push(now);
				continue;
			}
		}
		else
		{
			now = -now;

			pos = car[now];
			parking[pos] = 0;
			car[now] = 0;

			if (waitting.empty())
				continue;

			now = waitting.front();
			waitting.pop();
		}

		result += price[pos] * weight[now];
		parking[pos] = now;
		car[now] = pos;
	}

	cout << result;
}
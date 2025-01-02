#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	float C;
	int N;

	cin >> C >> N;

	vector<int> stackList(1);
	int maxStack = 0, maxCount = 0;
	for (int i = 0, now; i < N; i++)
	{
		cin >> now;

		if (now)
			stackList.back()++;
		else
			stackList.push_back(0);

		maxCount = max(maxCount, now);
	}
	
	for (int i = 0; i < stackList.size(); i++)
		maxStack = max(maxStack, stackList[i]);

	if (C >= 0.99f)
	{
		bool isTwo = (C >= 1.98f);
		maxStack = min(1 + isTwo, N);

		for (int i = 1, now; i < stackList.size(); i++)
		{
			now = stackList[i] + stackList[i - 1];
			maxStack = max(maxStack, now + 1);
		}

		for (int i = 2, now; isTwo && i < stackList.size(); i++)
		{
			now = stackList[i] + stackList[i - 1] + stackList[i - 2];
			maxStack = max(maxStack, now + 2);
		}
	}

	cout << maxStack << "\n" << maxCount;
}
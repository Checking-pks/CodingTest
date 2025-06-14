#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> times, result;
vector<vector<int>> techTree;

int simulate(int pos)
{
	if (techTree[pos].empty())
		return times[pos];

	if (result[pos])
		return result[pos];

	int maxTime = 0;
	for (int i = 0; i < techTree[pos].size(); i++)
		maxTime = max(maxTime, simulate(techTree[pos][i]));

	result[pos] = maxTime + times[pos];
	return result[pos];
}

int main()
{
	cin >> N;

	times = result = vector<int>(N);
	techTree = vector<vector<int>>(N);
	for (int i = 0, t; i < N; i++)
	{
		cin >> times[i] >> t;

		while (t != -1)
		{
			techTree[i].push_back(t - 1);
			cin >> t;
		}
	}

	for (int i = 0; i < N; i++)
		cout << simulate(i) << "\n";
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

const int MAX = 10001;

int N;
vector<int> nList;
vector<vector<pair<int, int>>> saleList;

map<int, int> priceMap;

void input()
{
	cin >> N;

	nList = vector<int>(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> nList[i];

	saleList = vector<vector<pair<int, int>>>(N + 1);
	for (int i = 1, num; i <= N; i++)
	{
		cin >> num;
		
		saleList[i] = vector<pair<int, int>>(num);
		for (int j = 0; j < num; j++)
			cin >> saleList[i][j].first >> saleList[i][j].second;
	}
}

int simulate(int pos, int visit, int price, vector<int> priceList)
{
	visit |= (1 << pos);
	price += priceList[pos];

	if (visit == (1 << (N + 1)) - 1)
		return price;

	if (priceMap.find(visit) != priceMap.end())
		if (priceMap[visit] <= price)
			return MAX;
	
	priceMap[visit] = price;

	for (int i = 0; i < saleList[pos].size(); i++)
	{
		int salePos = saleList[pos][i].first;
		int salePrice = saleList[pos][i].second;

		priceList[salePos] -= salePrice;
		priceList[salePos] = max(priceList[salePos], 1);
	}

	int result = MAX;

	for (int i = 1; i <= N; i++)
	{
		if (visit & (1 << i))
			continue;

		result = min(result, simulate(i, visit, price, priceList));
	}

	return result;
}

int main()
{
	input();
	cout << simulate(0, 0, 0, nList);
}
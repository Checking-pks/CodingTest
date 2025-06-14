#include <iostream>
#include <vector>

using namespace std;

int W, H, S;
pair<int, int> pos;
vector<pair<int, int>> storeList;

pair<int, int> getPos(int dir, int dist)
{
	if (dir == 1) return {dist, 0};
	if (dir == 2) return {dist, H};
	if (dir == 3) return {0, dist};
	return {W, dist};
}

int getDist(pair<int, int> a, pair<int, int> b)
{
	if ((!a.first || !b.first) && (a.first + b.first == W))
		return W + min(
			a.second + b.second,
			2 * H - (a.second + b.second)
		);

	if ((!a.second || !b.second) && (a.second + b.second == H))
		return H + min(
			a.first + b.first,
			2 * W - (a.first + b.first)
		);

	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
	cin >> W >> H >> S;

	int dir, dist, result = 0;
	for (int i = 0; i < S; i++)
	{
		cin >> dir >> dist;
		storeList.push_back(getPos(dir, dist));
	}

	cin >> dir >> dist;
	pos = getPos(dir, dist);

	for (int i = 0; i < S; i++)
		result += getDist(pos, storeList[i]);

	cout << result;
}
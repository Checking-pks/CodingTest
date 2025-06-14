#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<vector<ll>> vvll;

const ll matrixSize = 8;
const ll DIV = 1000000007;

map<int, vvll> matrixMap;

vvll defaultMatrix = {
	{0, 1, 1, 0, 0, 0, 0, 0},
	{1, 0, 1, 1, 0, 0, 0, 0},
	{1, 1, 0, 1, 1, 0, 0, 0},
	{0, 1, 1, 0, 1, 1, 0, 0},
	{0, 0, 1, 1, 0, 1, 1, 0},
	{0, 0, 0, 1, 1, 0, 0, 1},
	{0, 0, 0, 0, 1, 0, 0, 1},
	{0, 0, 0, 0, 0, 1, 1, 0}
};

vvll matrixMul(vvll a, vvll b)
{
	vvll result = a;

	for (int r = 0; r < matrixSize; r++)
	{
		for (int c = 0; c < matrixSize; c++)
		{
			result[r][c] = 0;

			for (int k = 0; k < matrixSize; k++)
			{
				result[r][c] += a[r][k] * b[k][c];
				result[r][c] %= DIV;
			}
		}
	}

	return result;
}

vvll simulate(int n)
{
	if (matrixMap.find(n) != matrixMap.end())
		return matrixMap[n];

	vvll result = matrixMul(simulate(n / 2), simulate(n / 2 + (n & 1)));
	matrixMap[n] = result;

	return result;
}

int main()
{
	matrixMap[1] = defaultMatrix;

	int N;
	cin >> N;

	simulate(N);

	cout << matrixMap[N].front().front();
}
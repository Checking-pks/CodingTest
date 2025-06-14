#include <iostream>
#include <vector>

using namespace std;

const int DIV = 1000000007;

vector<vector<int>> moveList = {
	{1, 2}, {0, 2, 3}, {0, 1, 3, 4}, {1, 2, 4, 5}, {2, 3, 5, 6}, {3, 4, 7}, {4, 7}, {5, 6}
};

void move(vector<int> &field)
{
	vector<int> result(8);

	for (int i = 0; i < moveList.size(); i++)
	{
		if (!field[i]) continue;

		for (int j = 0; j < moveList[i].size(); j++)
		{
			result[moveList[i][j]] += field[i];
			result[moveList[i][j]] %= DIV;
		}
	}

	field = result;
}

int main()
{
	int N;
	cin >> N;

	vector<int> nList(8);
	nList[0] = 1;
	
	for (int i = 1; i <= N; i++)
	{
		move(nList);
	}
    
    cout << nList[0];
}
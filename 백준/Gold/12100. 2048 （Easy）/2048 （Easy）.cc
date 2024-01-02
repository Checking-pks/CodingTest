#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> moveList = {
	{-1, 0}, {0, -1}, {1, 0}, {0, 1}
};

void blockMove(vector<vector<int>> &field, vector<vector<bool>> &sum, int &result, int rotate, int nowX, int nowY)
{
	int newX, newY;
	if (field[nowX][nowY] == 0) return;
	while (true)
	{
		newX = nowX + moveList[rotate].first;
		newY = nowY + moveList[rotate].second;

		if (field[newX][newY] == 0) 
		{
			field[newX][newY] = field[nowX][nowY];
			field[nowX][nowY] = 0;
			nowX = newX; nowY = newY;
		} 
		else if (field[newX][newY] == field[nowX][nowY]) 
		{
			if (sum[newX][newY]) break;
			sum[newX][newY] = true;
			field[newX][newY] <<= 1;
			field[nowX][nowY] = 0;
			result = max(result, field[newX][newY]);
			break;
		} 
		else 
		{
			break;
		}
	}
}

void simulate(vector<vector<int>> field, int &result, int rotate, int times) 
{
	// field Move
	auto newField = field;

	vector<vector<bool>> alreadySum(field.size(), vector<bool>(field[0].size()));
	if (rotate < 2)
	{
		for (int i=1; i<newField.size()-1; i++) 
		{
			for (int j=1; j<newField[i].size()-1; j++)
			{
				blockMove(newField, alreadySum, result, rotate, i, j);
			}
		}
	}
	else
	{
		for (int i=newField.size()-2; i>=1; i--)
		{
			for (int j=newField[i].size()-2; j>=1; j--) 
			{
				blockMove(newField, alreadySum, result, rotate, i, j);
			}
		}
	}
	
	if (field == newField) return;
	if (times > 4) return;

	for (int i=0; i<4; i++)
		simulate(newField, result, i, times+1);
}

int main() 
{
	int N, result = 0;
	cin >> N;

	vector<vector<int>> field(N+2, vector<int>(N+2, 3));

	for (int i=1; i<=N; i++) 
	{
		for (int j=1; j<=N; j++) 
		{
			cin >> field[i][j];
			result = max(result, field[i][j]);	
		}
	}

	for (int i=0; i<4; i++)
		simulate(field, result, i, 1);

	cout << result;
}
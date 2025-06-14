#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> mList;

void input()
{
    for (int i = 0, S, P; i < N; i++)
	{
		cin >> S >> P;

		for (int j = 0; j <= M; j++)
		{
			mList[j] -= S;

			if (j + P <= M)
				mList[j] = max(mList[j], mList[j + P]);

			if (j + P + 1 <= M)
				mList[j] = max(mList[j], mList[j + P + 1] + S);
		}
	}
}

string output()
{
    for (int i = 0; i <= M; i++)
	{
		if (mList[i] == 0) 
		    return "D";
		
		if (mList[i] > 0)
		    return "W";
	}

	return "L";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> N >> M;

	mList = vector<int> (M + 1);
	
	input();

	cout << output();
}
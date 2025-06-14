#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	vector<vector<int>> aList(101), bList(101);

	cin >> N;
	for (int i = 0, now; i < N; i++)
	{
		cin >> now;
		aList[now].push_back(i);
	}

	cin >> M;
	for (int i = 0, now; i < M; i++)
	{
		cin >> now;
		bList[now].push_back(i);
	}

	vector<int> result;
	for (int i = 100, aPos = -1, bPos = -1; i > 0; i--)
	{
		if (aList[i].empty() || bList[i].empty())
			continue;
        
        while (true)
        {
            int aFind = -1, bFind = -1;
            
            for (int j = 0; j < aList[i].size(); j++)
            {
                if (aPos < aList[i][j])
                {
                    aFind = aList[i][j];
                    break;
                }
            }
            
            for (int j = 0; j < bList[i].size(); j++)
            {
                if (bPos < bList[i][j])
                {
                    bFind = bList[i][j];
                    break;
                }
            }
            
            if (aFind == -1) break;
            if (bFind == -1) break;
            
            aPos = aFind;
            bPos = bFind;
            
            result.push_back(i);
        }
	}

	cout << result.size() << "\n";
	for (int n : result)
		cout << n << " ";
}
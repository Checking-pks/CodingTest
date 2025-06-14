#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> oneList;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	int N, C;
	cin >> N >> C;
	
	for (int i = 0, now; i < N; i++)
	{
		cin >> now;

		if (now == C)
		{
			cout << 1;
			return 0;
		}

		if (now > C) continue;

		for (int num : oneList)
		{
			if (num + now == C)
			{
				cout << 1;
				return 0;
			}

			if (num + now > C) continue;

            auto iter = oneList.find(C - num - now);
            if (iter == oneList.end()) continue;
            if (*iter == num) continue;
            if (*iter == now) continue;
            
            cout << 1;
            return 0;
		}
		
		oneList.insert(now);
	}

	cout << 0;
}
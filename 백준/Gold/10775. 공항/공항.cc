#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	int G, P, result = 0;
	cin >> G >> P;

	set<int> gateSet;
	for (int i = 1; i <= G; i++)
		gateSet.insert(i);

	for (int i = 0, now; i < P; i++)
	{
		cin >> now;
		auto idx = gateSet.upper_bound(now);

		if (idx == gateSet.begin()) break;

        gateSet.erase(--idx);
		result++;
	}

	cout << result;
}
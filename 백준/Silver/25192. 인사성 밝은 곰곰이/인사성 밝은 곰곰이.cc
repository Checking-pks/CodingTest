#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N, result = 0;
	cin >> N;

	set<string> sayHi;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		if (s == "ENTER")
		{
			result += sayHi.size();
			sayHi.clear();
			continue;
		}

		sayHi.insert(s);
	}

	cout << result + sayHi.size();
}
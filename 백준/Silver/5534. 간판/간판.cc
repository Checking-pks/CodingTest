#include <iostream>

using namespace std;

string name;

bool check(string now)
{
	if (now.length() < name.length())
		return 0;

	if (now.length() == name.length())
		return (now == name);

	int aPos = -1, bPos, cPos;

	while ((aPos = now.find(name[0], aPos + 1)) != string::npos)
	{
		bPos = aPos;
		while ((bPos = now.find(name[1], bPos + 1)) != string::npos)
		{
			int dist = bPos - aPos;

			for (int i = 2; i < name.length(); i++)
			{
				cPos = aPos + i * dist;

				if (cPos >= now.length())
					break;
				
				if (name[i] != now[cPos])
					break;

				if (i == name.length() - 1)
					return 1;
			}
		}
	}

	return 0;
}

int main()
{
	int N, result = 0;
	cin >> N >> name;

	for (int i = 0; i < N; i++)
	{
		string now;
		cin >> now;
		result += check(now);
	}

	cout << result;
}
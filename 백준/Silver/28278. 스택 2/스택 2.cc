#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	stack<int> s;
	int N;
	cin >> N;

	for (int i = 0, c; i < N; i++)
	{
		cin >> c;

		if (c == 1)
		{
			int num;
			cin >> num;
			s.push(num);
		}

		if (c == 2)
		{
			if (s.size())
			{
				cout << s.top() << "\n";
				s.pop();
			}
			else
				cout << "-1\n";
		}

		if (c == 3)
			cout << s.size() << "\n";

		if (c == 4)
			cout << s.empty() << "\n";

		if (c == 5)
			cout << (s.size() ? s.top() : -1) << "\n";
	}
}
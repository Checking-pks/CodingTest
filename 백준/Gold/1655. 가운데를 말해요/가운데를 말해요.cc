#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, less<int>> front;
	priority_queue<int, vector<int>, greater<int>> back;
	
	front.push(-10001);
	back.push(10001);

	for (int i = 0, now; i < N; i++)
	{
		cin >> now;

		if (back.top() > now)
			front.push(now);
		else
			back.push(now);

		while ((int)front.size() - (int)back.size() > 1)
		{
			back.push(front.top());
			front.pop();
		}

		while ((int)back.size() - (int)front.size() > 0)
		{
			front.push(back.top());
			back.pop();
		}

		cout << front.top() << "\n";
	}
}
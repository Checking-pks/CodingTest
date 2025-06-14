#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	priority_queue<pair<int, int>> pq;
	vector<int> connect(K), sharing(N);

	for (int i = 0, now; i < N; i++)
	{
		cin >> now;
		pq.push({now, i});
	}

	for (int i = 0; i < K; i++)
	{
		if (pq.empty()) break;
		pair<int, int> now = pq.top();
		pq.pop();

		connect[i] = now.second + 1;
		sharing[now.second] = now.second + 1;
	}

	for (int i = 0; i < connect.size(); i++)
		cout << connect[i] << "\n";

	for (int i = 0; i < sharing.size(); i++)
		cout << sharing[i] << "\n";
}
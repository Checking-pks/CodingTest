#include <iostream>
#include <list>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;

	list<int> skewer;
	int friut[10] = {0,};	
	for (int i=0, now, nowFriut=0; i<N; i++) {
		cin >> now;
		skewer.push_back(now);
		friut[now]++;

		nowFriut = 0;
		for (int i=1; i<=9; i++)
			nowFriut += (friut[i] > 0);

		if (nowFriut > 2) {
			while (true) {
				int f = skewer.front();
				skewer.pop_front();
				if (!--friut[f]) break;
			}
		}

		result = max(result, (int)skewer.size());
	}

	cout << result;
}
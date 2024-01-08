#include <iostream>

using namespace std;

int main() {
	int N, K, last=0, result=0;
	cin >> N >> K >> last;

	for (int i=1, now; i<N; i++) {
		cin >> now;
		
		if (result == -1) continue;

		if (last < now)
		{
			last = now;
		}
		else if (last < now+K)
		{
			last = now+K;
			result++;
		}
		else
		{
			result = -1;
		}
	}

	cout << result;
}
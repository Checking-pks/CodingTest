#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	int countU=0, countR=0, countX=0, result=0;
	string cmd;
	
	cin >> N >> cmd;
	for (int i=0; i<N; i++) {
		if (cmd[i] == 'U') countU++;
		if (cmd[i] == 'R') countR++;
		if (cmd[i] == 'X') countX++;
	}
	
	cin >> K;
	for (int i=0, x, y; i<K; i++) {
		cin >> x >> y;
		if (x > countX + countR + 1 || 
			y > countX + countU + 1)
			continue;

		int needX = max(x - countR, y - countU) - 1;

		if (x < needX + 1 || y < needX + 1)
			continue;
		
		result++;
	}

	cout << result;
}
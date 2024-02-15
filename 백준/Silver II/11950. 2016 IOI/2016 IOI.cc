#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M, result=2501;
	cin >> N >> M;

	vector<vector<int>> field(N, vector<int>(3));
	for (int i=0; i<N; i++) {
		string s;
		cin >> s;

		for (int j=0; j<M; j++) {
			if (s[j] == 'W') field[i][0]++;
			if (s[j] == 'B') field[i][1]++;
			if (s[j] == 'R') field[i][2]++;
		}
	}

	for (int i=1; i<N-1; i++) {
		for (int j=i+1; j<N; j++) {
			int now = 0;
			for (int a=0; a<i; a++)
				now += field[a][1] + field[a][2];
			for (int a=i; a<j; a++)
				now += field[a][0] + field[a][2];
			for (int a=j; a<N; a++)
				now += field[a][0] + field[a][1];
			result = min(result, now);
		}
	}

	cout << result;
}
#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> nList;

int solution() {
	vector<int> num(N, 1);
	for(int i = 1, stack = 0; i < N; i++) {
		if(abs(nList[i - 1] - nList[i]) != 1) 
			stack = i;
		
		num[i] = i - stack + 1;
	}

	vector<int> dp(N + 1, 1'000'000'000);
	dp[0] = 0;
	
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= 3; j++) {
			if(i - j < 0) 
				break;
			
			dp[i] = min(dp[i], dp[i - j] + 1);
		}

		if(num[i - 1] >= K && i - K >= 0) 
			dp[i] = min(dp[i], dp[i - K] + 1);
	}

	return dp[N];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	nList = vector<int>(N);
	for (int i = 0; i < N; i++)
		cin >> nList[i];

	cout << solution();
}
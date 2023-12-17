#include <iostream>
#include <map>

using namespace std;

map<pair<int, int>, long long> numList;

long long dp(int r, int c) {
	if (r/2+1 <= c) c = r - c + 1;
	
	if (numList.find({r, c}) != numList.end()) return numList[{r, c}];
	if (c == 1 || r == c) return 1;

	long long now = dp(r-1, c-1) + dp(r-1, c);
	numList[{r, c}] = now;
	return now;
}

int main() {
	int R, C, W;
	cin >> R >> C >> W;

	long long result=0;
	for (int i=0; i<W; i++) 
		for (int j=0; j<=i; j++) 
			result += dp(R+i, C+j);

	cout << result;
}
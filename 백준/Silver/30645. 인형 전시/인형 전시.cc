#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int R, C, N, result = 0;
	cin >> R >> C >> N;

	unordered_map<int, int> nList;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		nList[now]++;
	}

	for (auto now:nList) 
		result += min(C, now.second);

	cout << min(result, R*C);
}
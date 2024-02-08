#include <iostream>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, result=0;
	cin >> N;
	
	map<int, int> numList;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		numList[now]++;
	}

	for (auto a:numList) {
		for (auto b:numList) {
			if (a == b && a.second < 2) continue;
			int now = a.first * b.first, sum = 0;
			while (now) {
				sum += now % 10;
				now /= 10;
			}

			result = max(result, sum);
		}
	}

	cout << result;
}
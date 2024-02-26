#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> days(N+1);
	for (int i=0, d, p; i<M; i++) {
		cin >> d >> p;

		for (int j=N; j>=d; j--) 
			days[j] = max(days[j], days[j-d] + p);
	}

	cout << days[N];
}
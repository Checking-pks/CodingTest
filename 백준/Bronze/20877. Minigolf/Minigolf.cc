#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int par = (N >> 1) * 5 + (N & 1) * 2;
	
	for (int i=0, now; i<N; i++) {
		cin >> now;
		now = min(now, 7);
		par -= now;
	}

	cout << -par;
}
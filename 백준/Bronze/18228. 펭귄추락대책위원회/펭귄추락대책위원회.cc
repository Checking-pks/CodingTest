#include <iostream>

using namespace std;

int main() {
	int N, a1=1000000000, a2=1000000000;
	cin >> N;
	for (int i=0, now, check=0; i<N; i++) {
		cin >> now;
		if (now == -1) {
			check = true;
			continue;
		}

		if (check) a1 = min(a1, now);
		else a2 = min(a2, now);
	}
	cout << a1 + a2;
}
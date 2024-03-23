#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	
	int N;
	cin >> N;

	if (N==1) {
		cout << "1\n1 1";
		return 0;
	}

	cout << (N-1)*2 << "\n";
	
	for (int i=1; i<N; i++) cout << 1 << " " << i << "\n";
	for (int i=1; i<N; i++)	cout << N << " " << i << "\n";
}
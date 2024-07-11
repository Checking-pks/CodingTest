#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, N, result = 0;
	cin >> a >> b >> c >> d >> N;

	for (int i=0, u, v, now; i<N; i++) {
		cin >> u >> v;
		
		now = max(a * (v - b) * (v - b) + c, d);
		result += (now == u);
	}

	cout << result;
}
#include <iostream>
#include <map>

using namespace std;

int main() {
	int N, result = 0;
	cin >> N;

	map<int, bool> t;
	for (int i=0, a, b; i<N; i++) {
		cin >> a >> b;

		if (t[a] == b)
			result++;

		t[a] = b;
	}

	for (auto a : t)
		result += a.second;

	cout << result;
}
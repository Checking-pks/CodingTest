#include <iostream>

using namespace std;

int main() {
	int N, M, result = 0;
	cin >> N >> M;

	for (int i=0; i<N; i++) {
		string s;
		int count = 0;
		cin >> s;

		for (int j=0; j<M; j++) 
			count += s[j] == 'O';

		result += (count * 2 >= M);
	}

	cout << result;
}
#include <iostream>

using namespace std;

int main() {
	long long S, K, result=1;
	cin >> S >> K;

	for (int i=0; i<K; i++) {
		result *= S/K + (S%K!=0);
		if (S%K) S--;
	}

	cout << result;
}
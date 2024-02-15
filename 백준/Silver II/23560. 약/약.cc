#include <iostream>

using namespace std;

int main() {
	int N, result=2;
	cin >> N;

	for (int i=1; i<N; i++)
		result *= 3;
	
	cout << result;
}
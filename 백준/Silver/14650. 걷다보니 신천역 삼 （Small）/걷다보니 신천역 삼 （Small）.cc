#include <iostream>

using namespace std;

void simulate(int N, int sum, int &result) {
	if (N==0) {
		if (sum%3==0) result++;
		return;
	}

	simulate(N-1, sum, result);
	simulate(N-1, sum+1, result);
	simulate(N-1, sum+2, result);
}

int main() {
	int N, result=0;
	cin >> N;
	
	simulate(N-1, 1, result);
	simulate(N-1, 2, result);

	cout << result;
}
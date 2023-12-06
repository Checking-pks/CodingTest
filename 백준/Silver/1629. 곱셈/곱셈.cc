#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long A, B, C, result=1;
	cin >> A >> B >> C;

	vector<long long> numList(31);
	numList[0] = A % C;
	for (int i=0; i<30; i++) {
		numList[i+1] = (numList[i] * numList[i]) % C;
	}

	for (long long i=1, pos=0; i<=B; i<<=1,pos++) {
		if (B & i) {
			result *= numList[pos];
			result %= C;
		}
	}

	cout << result;
}
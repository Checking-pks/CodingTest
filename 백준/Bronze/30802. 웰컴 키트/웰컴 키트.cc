#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList(6);
	for (int i=0; i<6; i++)
		cin >> nList[i];

	int T, P;
	cin >> T >> P;

	int result = 0;
	for (int i=0; i<6; i++) {
		result += nList[i] / T;
		result += (nList[i] % T != 0);
	}

	cout << result << "\n"
		<< N / P << " " << N % P;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> numList(N);

	for (int i=0; i<N; i++)
		cin >> numList[i];

	for (int i=N-1; i>=0; i--) 
		if (N == numList[i])
			N--;
	
	cout << N;
}
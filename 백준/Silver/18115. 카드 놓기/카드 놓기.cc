#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> numList(N);

	int front=0, second=1, back=N-1;
	for (int i=N, now; i>0; i--) {
		cin >> now;

		if (now == 1) {
			numList[front] = i;
			while (numList[front] != 0)
				front++;
			second = front+1;
		}
		if (now == 2) 
			numList[second++] = i;
		if (now == 3)
			numList[back--] = i;
	}

	for (int i=0; i<N; i++)
		cout << numList[i] << " ";
}
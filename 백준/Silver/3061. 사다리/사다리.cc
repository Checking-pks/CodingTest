#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N, result=0;
		cin >> N;

		vector<int> nList(N);
		for (int i=0; i<N; i++)
			cin >> nList[i];

		for (int i=0; i<N; i++) {
			for (int j=i+1; j<N; j++) {
				if (nList[j] < nList[i]) {
					swap(nList[i], nList[j]);
					result++;
				}
			}
		}

		cout << result << "\n";
	}
}
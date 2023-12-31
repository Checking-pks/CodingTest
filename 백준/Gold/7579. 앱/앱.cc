#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	
	vector<int> A(N), c(N), timeList(10001);
	for (int i=0; i<N; i++) cin >> A[i];
	for (int i=0; i<N; i++) cin >> c[i];

	for (int i=0; i<N; i++) {
		int memory = A[i], time = c[i];

		for (int i=timeList.size()-1; i>=time; i--) {
			timeList[i] = max(
				timeList[i],
				timeList[i-time] + memory
			);
		}
	}

	for (int i=0; i<timeList.size(); i++) {
		if (timeList[i] >= M) {
			cout << i;
			break;
		}
	}
}
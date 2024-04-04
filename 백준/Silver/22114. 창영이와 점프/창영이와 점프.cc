#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int stack = 1, result = 0;
	vector<int> stackList(1);
	for (int i=0, now; i<N-1; i++) {
		cin >> now;

		if (now <= K) {
			stack++;
		} else {
			stackList.push_back(stack);
			stack = 1;
		}
	}

	stackList.push_back(stack);

	for (int i=1; i<stackList.size(); i++) {
		result = max(result, stackList[i] + stackList[i-1]);
	}

	cout << result;
}
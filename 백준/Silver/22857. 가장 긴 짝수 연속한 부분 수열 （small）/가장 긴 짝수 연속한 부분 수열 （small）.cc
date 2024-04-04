#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int stack = 0, sum = 0, result = 0;
	vector<int> stackList;

	for (int i = 0, now; i < N; i++) {
		cin >> now;

		if (now & 1) {
			stackList.push_back(stack);
			stack = 0;
		} else {
			stack++;
		}
	}

	if (stack)
		stackList.push_back(stack);

	for (int i = 0; i <= K && i < stackList.size(); i++)
		sum += stackList[i];

	result = sum;

	for (int i = K + 1; i < stackList.size(); i++) {
		sum += stackList[i];
		sum -= stackList[i - K - 1];
		result = max(result, sum);
	}

	cout << result;
}
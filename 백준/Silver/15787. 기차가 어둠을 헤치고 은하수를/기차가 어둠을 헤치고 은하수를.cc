#include <iostream>
#include <deque>
#include <set>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	deque<deque<bool>> train(N, deque<bool>(20));
	for (int i=0; i<M; i++) {
		int command, trainNum, sitNum;
		cin >> command >> trainNum;

		switch (command) {
			case 1:
			case 2:
				cin >> sitNum;
				train[trainNum-1][sitNum-1] = (command==1);
				break;
			case 3:
				train[trainNum-1].push_front(false);
				train[trainNum-1].pop_back();
				break;
			case 4:
				train[trainNum-1].push_back(false);
				train[trainNum-1].pop_front();
				break;
		}
	}

	set<deque<bool>> result;
	for (int i=0; i<N; i++) {
		if (result.find(train[i]) != result.end()) continue;
		result.insert(train[i]);
	}

	cout << result.size();
}
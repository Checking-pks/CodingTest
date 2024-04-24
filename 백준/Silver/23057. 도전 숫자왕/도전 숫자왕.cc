#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<int> nList;
set<int> sumList;
int sum = 0;

void simulate(int pos, int nowSum) {
	if (nowSum > sum)
		return;
	if (pos >= nList.size()) {
		sumList.insert(nowSum);
		return;
	}

	simulate(pos + 1, nowSum);
	simulate(pos + 1, nowSum + nList[pos]);
}

int main() {
	int N;
	cin >> N;

	nList = vector<int>(N);
	for (int i = 0; i < N; i++) {
		cin >> nList[i];
		sum += nList[i];
	}

	simulate(0, 0);

	cout << sum - sumList.size() + 1;
}
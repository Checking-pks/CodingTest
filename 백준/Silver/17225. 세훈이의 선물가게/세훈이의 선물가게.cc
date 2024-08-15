#include <iostream>
#include <vector>

using namespace std;

vector<int> timeA = {-300}, timeB = {-300}, resultA, resultB;

void packing(vector<int> &timeList, int startTime, int count, int packingTime) {
	timeList.push_back(max(timeList.back() + packingTime, startTime));

	for (int i = 1; i < count; i++)
		timeList.push_back(timeList.back() + packingTime);
}

void processing() {
	int aPos = 1, bPos = 1, length = timeA.size() + timeB.size() - 1;
	
	for (int i = 1; i < length; i++) {
		if (aPos >= timeA.size()) {
			resultB.push_back(i);
			continue;
		}

		if (bPos >= timeB.size()) {
			resultA.push_back(i);
			continue;
		}

		if (timeA[aPos] <= timeB[bPos]) {
			resultA.push_back(i);
			aPos++;
		} else {
			resultB.push_back(i);
			bPos++;
		}
	}
}

void output(vector<int> a, vector<int> b) {
	cout << a.size() << "\n";
	if (a.size()) {
		for (int r : a)
			cout << r << " ";
		cout << "\n";
	}
	
	cout << b.size() << "\n";
	if (b.size()) 
		for (int r : b)
			cout << r << " ";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int A, B, N;
	cin >> A >> B >> N;

	for (int i = 0; i < N; i++) {
		int t, m;
		char c;

		cin >> t >> c >> m;

		if (c == 'B')
			packing(timeA, t, m, A);
		else
			packing(timeB, t, m, B);
	}

	processing();
	output(resultA, resultB);
}
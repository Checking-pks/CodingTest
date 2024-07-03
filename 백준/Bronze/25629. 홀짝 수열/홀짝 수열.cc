#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> evenList, oddList;
	for (int i=0, now; i<N; i++) {
		cin >> now;

		if (now & 1)
			oddList.push_back(now);
		else
			evenList.push_back(now);
	}

	cout << (oddList.size() - evenList.size() == (N & 1));
}
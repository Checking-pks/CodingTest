#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, P, result = 0;
	cin >> N >> P;

	vector<stack<int>> lineList(7);
	for (int i=0, line, fret; i<N; i++) {
		cin >> line >> fret;

		if (lineList[line].empty())
			lineList[line].push(0);

		while (lineList[line].top() > fret) {
			result++;
			lineList[line].pop();
		}

		if (lineList[line].top() != fret) {
			result++;
			lineList[line].push(fret);
		}
	}

	cout << result;
}
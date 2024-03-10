#include <iostream>
#include <vector>

using namespace std;

void cmp(pair<int, int> &r, pair<int, int> t) {
	if (r.first != t.first) r = t;
	else if (r.second > t.second) r = t;
}

int main() {
	int N;
	cin >> N;

	pair<int, int> result = {0, 0};
	vector<int> nowList(6);
	for (int i=1, a, b; i<=N; i++) {
		cin >> a >> b;

		vector<int> nextList(6);
		nextList[a] = nowList[a] + 1;
		nextList[b] = nowList[b] + 1;

		if (result.first <= nextList[a]) 
			cmp(result, {nextList[a], a});
		if (result.first <= nextList[b])
			cmp(result, {nextList[b], b});

		nowList = nextList;
	}

	cout << result.first << " " << result.second;
}
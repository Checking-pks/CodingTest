#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
	int N, M, result = 1;
	cin >> N >> M;

	map<int, int> defaultMap;
	vector<int> idxList(M);
	for (int i=0; i<M; i++) {
		cin >> idxList[i];
		defaultMap[idxList[i]] = 0;
	}

	set<map<int, int>> setList;
	setList.insert(defaultMap);

	for (int i=0; i<M; i++) {
		char c;
		cin >> c;

		defaultMap[idxList[i]] += (c=='+' ? 1 : -1);

		if (setList.find(defaultMap) == setList.end())
			setList.insert(defaultMap);
		else
			result = 0;
	}

	cout << result;
}
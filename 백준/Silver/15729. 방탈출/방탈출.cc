#include <iostream>
#include <list>

using namespace std;

void check(list<bool> &nList, int &result) {
	if (nList.front()) {
		int j = 0, minimum = min((int)nList.size(), 3);
		result++;
		for (auto iter = nList.begin(); j < minimum; j++, iter++)
			*iter = !*iter;
	}

	while (nList.size() && !nList.front())
		nList.pop_front();
}

int main() {
	int N, result = 0;
	cin >> N;

	list<bool> nList;
	for (int i = 0, now; i < N; i++) {
		cin >> now;
		nList.push_back(now);

		if (nList.size() < 3)
			continue;

		check(nList, result);
	}

	while (nList.size())
		check(nList, result);

	cout << result;
}
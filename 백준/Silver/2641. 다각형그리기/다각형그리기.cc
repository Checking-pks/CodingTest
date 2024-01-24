#include <iostream>
#include <list>
#include <set>

using namespace std;

int main() {
	int length;
	cin >> length;

	set<list<int>> resultList;
	list<list<int>> result;

	list<int> forward, reverse;
	for (int i=0, now; i<length; i++) {
		cin >> now;
		forward.push_back(now%4);
		reverse.push_front((now+6)%4);
	}

	for (int i=0; i<length; i++) {
		resultList.insert(forward);
		resultList.insert(reverse);

		forward.push_back(forward.front());
		reverse.push_back(reverse.front());

		forward.pop_front();
		reverse.pop_front();
	}

	int testcase;
	cin >> testcase;

	while (testcase--) {
		list<int> nowList;
		for (int i=0, now; i<length; i++) {
			cin >> now;
			nowList.push_back(now%4);
		}

		if (resultList.find(nowList) == resultList.end()) continue;
		
		result.push_back(nowList);
	}

	cout << result.size() << "\n";
	for (auto l:result) {
		for (auto n:l) 
			cout << (n ? n : 4) << " ";
		cout << "\n";
	}
}
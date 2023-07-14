#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int num;
	list<int> numList;

	cin >> num;

	for (int i=0, nowNum; i<num; i++) {
		cin >> nowNum;
		numList.push_back(nowNum);
	}

	numList.sort();
	numList.unique();

	for (int n:numList)
		cout << n << " ";
}
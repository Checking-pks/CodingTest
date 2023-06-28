#include <iostream>
#include <list>

using namespace std;

int main() {
	int numCount;
	cin >> numCount;

	while (numCount) {
		list <int> numList;
		for (int i=0, num; i<numCount; i++) {
			cin >> num;
			numList.push_back(num);
		}

		numList.unique();

		for (int n:numList)
			cout << n << " ";

		cout << "$\n";
		
		cin >> numCount;
	}
}
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<int, int> numList;

	for (int i=0, num; i<5; i++) {
		cin >> num;

		numList[num]++;
	}

	for(pair<int, int> n:numList) {
		if (n.second & 1) {
			cout << n.first;
			break;
		}
	}
}
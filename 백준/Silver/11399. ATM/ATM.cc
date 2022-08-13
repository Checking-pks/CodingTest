#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	list<int> times;
	int peopleNum, result = 0;
	cin >> peopleNum;

	for (int i=0; i<peopleNum; i++) {
		int time;
		cin >> time;

		times.push_back(time);
	}

	times.sort();

	int sum = 0;

	for (int t:times) {
		sum += t;
		result += sum;
	}

	cout << result;
	
	return 0;
}
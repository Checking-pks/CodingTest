#include <iostream>
#include <vector>

using namespace std;

int main() {
	int point, result=0;
	cin >> point;

	vector<int> numList(point, 0);

	for (int i=0; i<point; i++)
		cin >> numList[i];

	for (int i=0, now; i<point; i++) {
		cin >> now;
		if (now-numList[i] > 0)
			result += now-numList[i];
	}

	cout << result;
}
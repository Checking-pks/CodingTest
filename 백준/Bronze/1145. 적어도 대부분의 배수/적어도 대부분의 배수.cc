#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numList = {0, 0, 0, 0, 0};

	for (int i=0; i<5; i++)
		cin >> numList[i];

	for (int i=1; true; i++) {
		int count = 0;

		for (int n:numList) 
			if (i % n == 0)
				count++;

		if (count >= 3) {
			cout << i;
			break;
		}
	}
}
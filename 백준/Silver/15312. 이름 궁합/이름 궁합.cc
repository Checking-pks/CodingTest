#include <iostream>
#include <vector>

using namespace std;

vector<int> stroke = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main() {
	string name1, name2;
	cin >> name1 >> name2;

	vector<int> numList;

	for (int i=0; i<name1.length(); i++) {
		numList.push_back(stroke[name1[i] - 'A']);
		numList.push_back(stroke[name2[i] - 'A']);
	}

	while (numList.size() > 2) {
		vector<int> newNumList;

		for (int i=0; i<numList.size()-1; i++) {
			newNumList.push_back((numList[i] + numList[i+1]) % 10);
		}

		numList = newNumList;
	}

	cout << numList[0] << numList[1];
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, pos=0;
	string s;
	cin >> n >> k >> s;

	vector<int> numList;

	for (int i=s.find(',', pos); i != string::npos; i=s.find(',', pos)) {
		numList.push_back(stoi(s.substr(pos, i-pos)));
		pos = i+1;
	}

	numList.push_back(stoi(s.substr(pos)));

	while (k--) {
		vector<int> newNumList;
		for (int i=1; i<numList.size(); i++) {
			newNumList.push_back(numList[i] - numList[i-1]);
		}
		numList = newNumList;
	}

	cout << numList[0];

	for (int i=1; i<numList.size(); i++) {
		cout << ',' << numList[i];
	}
}
#include <iostream>
#include <vector>

using namespace std;

const int DIVISION = 1000000000;

vector<int> sum(vector<int> a, vector<int> b) {
	int size = max(a.size(), b.size());
	vector<int> result(size + 1);

	for (int i=0; i<size; i++) {
		int now = 0;
		if (i < a.size()) now += a[i];
		if (i < b.size()) now += b[i];
		if (now >= DIVISION) {
			result[i+1] += now / DIVISION;
			now %= DIVISION;
		}

		result[i] += now;
	}

	if (result.back() == 0) result.pop_back();
	
	return result;
}

int main() {
	pair<vector<int>, vector<int>> numList = {{4}, {6}};
	int n;
	cin >> n;

	if (n == 1) {
		cout << numList.first[0];
		return 0;
	}
	
	for (int i=2; i<n; i++) {
		pair<vector<int>, vector<int>> newNumList = {
			numList.second,
			sum(numList.first, numList.second)
		};

		numList = newNumList;
	}

	cout << numList.second.back();
	for (int i=numList.second.size()-2; i>=0; i--) {
		string now = to_string(numList.second[i]);
		while (now.length() < 9) now = '0' + now;
		cout << now;
	}
}
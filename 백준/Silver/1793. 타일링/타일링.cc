#include <iostream>
#include <vector>

using namespace std;

const int DIVISION = 1'000'000'000;
const int NUM_LENGTH = 9;

vector<vector<int>> nList(251, {0});

void sum(int pos, vector<int> num) {
	while (nList[pos].size() > num.size())
		num.push_back(0);

	while (nList[pos].size() < num.size())
		nList[pos].push_back(0);

	int rest=0;
	for (int i=0, now; i<nList[pos].size(); i++) {
		now = nList[pos][i] + num[i] + rest;
		nList[pos][i] = now % DIVISION;
		rest = now / DIVISION;
	}

	if (rest) nList[pos].push_back(rest);
}

void tiling(int pos) {
	if (pos > 250) return;
	
	auto now = nList[pos];
	
	if (pos + 1 <= 250) {
		sum(pos+1, now);
	}
	if (pos + 2 <= 250) {
		sum(pos+2, now);
		sum(pos+2, now);
	}

	tiling(pos+1);
}

void output(vector<int> num) {
	cout << num.back();

	for (int i=num.size()-2; i>=0; i--) {
		string s = to_string(num[i]);

		cout << string(NUM_LENGTH - s.length(), '0') << s;
	}

	cout << "\n";
}

int main() {
	nList[0] = {1};
	tiling(0);
	
	int n;
	while (cin >> n) 
		output(nList[n]);
}
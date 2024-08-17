#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	string S;
	cin >> S;

	vector<string> sList;
	for (int i = 0; i < S.length(); i++)
		sList.push_back(S.substr(i));

	sort(sList.begin(), sList.end());

	for (int i = 0; i < sList.size(); i++)
		cout << sList[i] << "\n";
}
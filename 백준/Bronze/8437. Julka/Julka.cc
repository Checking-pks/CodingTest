#include <iostream>
#include <vector>

using namespace std;

const long long DIVISION = 1000000000;
const int DIV_LENGTH = 9;

vector<int> StringToVector(string n) {
	vector<int> result;
	for (int i=n.length()-DIV_LENGTH; i>=0; i-=DIV_LENGTH) 
		result.push_back(stoi(n.substr(i, DIV_LENGTH)));

	if (n.length() % DIV_LENGTH) 
		result.push_back(stoi(n.substr(0, n.length() % DIV_LENGTH)));

	return result;
}

vector<int> sum(vector<int> nList, vector<int> mList) {
	int rest = 0;

	for (int i=0; i<nList.size(); i++) {
		if (i<mList.size())
			nList[i] += mList[i];
		nList[i] += rest;
		rest = nList[i] / DIVISION;
		nList[i] %= DIVISION;
	}

	while (nList.size() && nList.back() == 0)
		nList.pop_back();

	return nList;
}

vector<int> dif(vector<int> nList, vector<int> mList) {
	bool rest = false;

	for (int i=0; i<nList.size(); i++) {
		if (i<mList.size())
			nList[i] -= mList[i];
		nList[i] -= rest;
		rest = false;
		if (nList[i] < 0) {
			nList[i] += DIVISION;
			rest = true;
		}
	}

	while (nList.size() && nList.back() == 0)
		nList.pop_back();

	return nList;
}

vector<int> half(vector<int> nList) {
	bool rest = false;

	for (int i=nList.size()-1; i>=0; i--) {
		nList[i] += (rest ? DIVISION : 0);
		rest = nList[i] & 1;
		nList[i] >>= 1;
	}

	while (nList.size() && nList.back() == 0)
		nList.pop_back();

	return nList;
}

void output(vector<int> nList) {
	cout << (nList.size() ? nList.back() : 0);

	for (int i=nList.size()-2; i>=0; i--) {
		string now = to_string(nList[i]);
		cout << string(DIV_LENGTH - now.length(), '0');
		cout << now;
	}

	cout << "\n";
}

int main() {
	string apple, more;
	cin >> apple >> more;

	vector<int> appleList = StringToVector(apple);
	vector<int> moreList  = StringToVector(more);

	output(half(sum(appleList, moreList)));
	output(half(dif(appleList, moreList)));
}
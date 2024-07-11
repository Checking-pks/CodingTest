#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<string, int> mList = {{"January", 1}, {"February", 2}, {"March", 3}, {"April", 4}, {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8}, {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}};

map<int, int> dList = {{1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

bool isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0))
		return true;
	if (year % 400 == 0)
		return true;
	return false;
}

int getTime(string t) {
	return (stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3)));
}

int main() {
	cout.precision(10);
	cout << fixed;
	
	string m, d, y, t;
	cin >> m >> d >> y >> t;
	
	int dayNum = (isLeapYear(stoi(y)) ? 366: 365);
	int mNum = mList[m];
	int dNum = stoi(d.substr(0, 2));
	int tNum = getTime(t);

	for (int i=1; i<mNum; i++) {
		dNum += (i == 2 && dayNum == 366);
		dNum += dList[i];
	}
	
	double tAll = dayNum * 24 * 60;
	double tNow = (dNum - 1) * 24 * 60 + tNum;

	cout << 100. * tNow / tAll;
}
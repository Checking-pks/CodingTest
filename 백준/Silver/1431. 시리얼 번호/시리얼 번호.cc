#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	if (a.length() != b.length())
		return a.length() < b.length();

	int aSum = 0, bSum = 0;

	for (int i=0; i<a.length(); i++) {
		if ('0' <= a[i] && a[i] <= '9') 
			aSum += a[i] - '0';

		if ('0' <= b[i] && b[i] <= '9') 
			bSum += b[i] - '0';
	}

	if (aSum != bSum)
		return aSum < bSum;

	return a < b;
}

int main() {
	int n;
	cin >> n;

	vector<string> sList(n, "");

	for (int i=0; i<n; i++)
		cin >> sList[i];

	sort(sList.begin(), sList.end(), cmp);

	for (int i=0; i<n; i++)
		cout << sList[i] << "\n";
}
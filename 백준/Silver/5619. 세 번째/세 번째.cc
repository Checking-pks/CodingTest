#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	vector<int> nList;
	for (int i=0, now; i<n; i++) {
		cin >> now;
		nList.push_back(now);
		sort(nList.begin(), nList.end());
		
		while (nList.size() > 4)
			nList.pop_back();
	}

	vector<int> result;

	for (int i=0; i<nList.size(); i++) {
		for (int j=0; j<nList.size(); j++) {
			if (i==j) continue;
			string s = to_string(nList[i]) + to_string(nList[j]);
			result.push_back(stoi(s));
		}
	}

	sort(result.begin(), result.end());
	cout << result[2];
}
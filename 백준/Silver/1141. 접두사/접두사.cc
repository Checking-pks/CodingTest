#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(string a, string b) { return a.size() > b.size(); }

int main() {
	int N;
	cin >> N;

	vector<string> strList(N);
	for (int i = 0; i < N; i++)
		cin >> strList[i];

	sort(strList.begin(), strList.end(), cmp);

	vector<string> result;
	for (int i = 0; i < N; i++) {
		string now = strList[i];
		bool isPrefix = false;

		for (int j = 0; !isPrefix && j < result.size(); j++)
			if (result[j].substr(0, now.length()) == now)
				isPrefix = true;

		if (!isPrefix)
			result.push_back(strList[i]);
	}

	cout << result.size();
}
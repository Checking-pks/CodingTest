#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second)
		return a.second < b.second;

	return a.first < b.first;
}

int main() {
	int n, nowTimes = 0, result = 0;
	cin >> n;

	vector<pair<int, int>> meetings;

	for (int i=0; i<n; i++) {
		int start, end;
		cin >> start >> end;

		meetings.push_back({start, end});
	}

	sort(meetings.begin(), meetings.end(), cmp);

	for (int i=0; i<meetings.size(); i++) {
		pair<int, int> nowMeeting = meetings[i];

		if (nowMeeting.first < nowTimes)
			continue;

		nowTimes = nowMeeting.second;
		result++;
	}

	cout <<  result;
}
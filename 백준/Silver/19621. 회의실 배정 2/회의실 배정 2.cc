#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class meeting {
public:
	int start, end;
	int number;
};

bool cmp(meeting a, meeting b) {
	if (a.end != b.end)
		return a.end < b.end;
	if (a.start != b.start)
		return a.start < b.start;
	return a.number > b.number;
}

int main() {
	int N, result=0;
	cin >> N;

	vector<meeting> meetingList(N);
	for (int i=0; i<N; i++) {
		cin >> meetingList[i].start
			>> meetingList[i].end
			>> meetingList[i].number;
	}

	sort(meetingList.begin(), meetingList.end(), cmp);

	map<int, int> reserveList;
	for (int i=0, maxBefore=0; i<N; i++) {
		auto now = meetingList[i];

		for (auto before:reserveList) {
			if (before.first > now.start) break;
			maxBefore = max(maxBefore, before.second);
		}

		reserveList[now.end] = max(
				reserveList[now.end],
				maxBefore + now.number
			);

		result = max(result, reserveList[now.end]);
	}

	cout << result;
}
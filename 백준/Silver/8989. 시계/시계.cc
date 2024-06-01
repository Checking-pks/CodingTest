#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double getDegree(string t) {
	int h = stoi(t.substr(0, 2)), 
		m = stoi(t.substr(3));

	if (h > 12)
		h -= 12;

	double minuteAngle = m * 6,
		   hourAngle = (h * 30) + (m * .5);

	double angle = abs(hourAngle - minuteAngle);

	return min(angle, 360 - angle);
}

bool cmp(string a, string b) {
	double aTime = getDegree(a),
		   bTime = getDegree(b);

	if (aTime != bTime)
		return aTime < bTime;

	return a < b;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		vector<string> timeList(5);
		for (int i=0; i<timeList.size(); i++)
			cin >> timeList[i];

		sort(timeList.begin(), timeList.end(), cmp);
		
		cout << timeList[2] << "\n";
	}
}
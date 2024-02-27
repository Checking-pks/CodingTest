#include <iostream>
#include <vector>
#define spot pair<long long, long long>

using namespace std;

long long ccw(spot s1, spot s2, spot s3) {
	long long S = s1.first * s2.second + 
		s2.first * s3.second + 
		s3.first * s1.second;
	
	S -= s1.second * s2.first + 
		s2.second * s3.first + 
		s3.second * s1.first;

	if (S > 0) return 1;
	if (S < 0) return -1;
	return 0;
}

bool isIntersect(pair<spot, spot> l1, pair<spot, spot> l2) {
	spot s1 = l1.first, s2 = l1.second;
	spot s3 = l2.first, s4 = l2.second;
	
	long long c1 = ccw(s1, s2, s3) * ccw(s1, s2, s4);
	long long c2 = ccw(s3, s4, s1) * ccw(s3, s4, s2);

	if (c1 == 0 && c2 == 0) {
		if (s1 > s2) swap(s1, s2);
		if (s3 > s4) swap(s3, s4);

		return s3 <= s2 && s1 <= s4;
	}

	return c1 <= 0 && c2 <= 0;
}

int main() {
	int N;
	cin >> N;

	vector<pair<spot, spot>> lineList;
	vector<int> groupList(N), groupCount(N, 1);

	for (int i=0; i<N; i++) {
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		lineList.push_back({
			{x1, y1}, {x2, y2}
		});

		groupList[i] = i;
	}

	for (int i=0; i<N-1; i++) {
		for (int j=i+1; j<N; j++) {
			bool isCross = isIntersect(lineList[i], lineList[j]);

			if (!isCross) continue;

			int g1 = groupList[i], g2 = groupList[j];

			if (g1 == g2) continue;
			
			groupCount[g1] += groupCount[g2];
			groupCount[g2] = 0;
			for (int k=0; k<groupList.size(); k++) 
				if (groupList[k] == g2) 
					groupList[k] = g1;
		}
	}

	int resultGroupCount=0, resultMaxGroup=0;
	for (int i=0; i<groupCount.size(); i++) {
		if (!groupCount[i]) continue;
		resultGroupCount++;
		resultMaxGroup = max(resultMaxGroup, groupCount[i]);
	}

	cout << resultGroupCount << "\n" << resultMaxGroup;
}
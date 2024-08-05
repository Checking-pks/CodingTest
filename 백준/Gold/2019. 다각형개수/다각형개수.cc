#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<pair<int, int>, vector<pair<int, int>>> lineList;

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
	return (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);
}

bool checkPolygon(pair<int, int> start, pair<int, int> before, pair<int, int> now, bool isPolygon) {
	if (start == now)
		return isPolygon;
	
	if (lineList[now].size() != 2)
		return false;

	int nextIdx = (lineList[now][0] == before);
	pair<int, int> next = lineList[now][nextIdx];
	lineList[now].clear();

	if (ccw(start, now, next))
		isPolygon = true;

	return checkPolygon(start, now, next, isPolygon);
}

int main() {
	int N;
	cin >> N;

	for (int i=0, x1, y1, x2, y2; i<N; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		lineList[{x1, y1}].push_back({x2, y2});
		lineList[{x2, y2}].push_back({x1, y1});
	}

	int result = 0;
	for (auto nowLine : lineList) {
		if (nowLine.second.size() != 2)
			continue;

		lineList[nowLine.first].clear();
		result += checkPolygon(nowLine.first, nowLine.first, nowLine.second[0], false);
	}

	cout << result;
}
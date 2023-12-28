#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<pair<int, int>> moveList = {
	{0, 1}, {1, 0}, {0, -1}, {-1, 0}
};

bool find(list<pair<int, int>> &list, pair<int, int> value) {
	bool result = false;
	for (auto iter = list.begin(); !result && iter != list.end(); iter++) {
		if (*iter == value) {
			result = true;
			*iter = {-1, -1};
		}
	}
	return result;
}

int simulate(int &n, list<pair<int, int>> &applePos, list<pair<int, bool>> &dirList, list<pair<int, int>> &snakePos, int direction, int time) {
	pair<int, int> nowPos = {
		snakePos.back().first + moveList[direction].first,
		snakePos.back().second + moveList[direction].second
	};
	
	if (nowPos.first <= 0 || nowPos.first > n) return time;
	if (nowPos.second <= 0 || nowPos.second > n) return time;
	if (find(snakePos, nowPos)) return time;
	
	if (!find(applePos, nowPos)) snakePos.pop_front();
	
	if (time == dirList.front().first) {
		direction += moveList.size() + (dirList.front().second ? 1 : -1);
		direction %= moveList.size();
		dirList.pop_front();
	}

	snakePos.push_back(nowPos);
	return simulate(n, applePos, dirList, snakePos, direction, time + 1);
}

int main() {
	int n, k, l;
	cin >> n >> k;

	list<pair<int, int>> applePos;
	for (int i=0, x, y; i<k; i++) {
		cin >> x >> y;
		applePos.push_back({x, y});
	}

	cin >> l;
	list<pair<int, bool>> dirList;
	for (int i=0; i<l; i++) {
		int time;
		char dir;
		cin >> time >> dir;
		dirList.push_back({time, (dir == 'D')});
	}

	list<pair<int, int>> snakePos;
	snakePos.push_back({1, 1});
	
	cout << simulate(n, applePos, dirList, snakePos, 0, 1);
}
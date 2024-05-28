#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int p, m;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.second < b.second;
}

class room {
public:
	void join(int l, string n) {
		if (users.size() >= m)
			return;

		users.push_back({l, n});
	}

	bool isCanJoin() {
		return (users.size() < m);
	}

	bool isCanJoinPlayer(int l) {
		if (users.size() == 0)
			return true;

		return (users.front().first - 10 <= l && 
				users.front().first + 10 >= l);
	}

	void output() {
		sort(users.begin(), users.end(), cmp);

		cout << (isCanJoin() ? "Waiting!" : "Started!") << "\n";

		for (int i=0; i<users.size(); i++) {
			cout << users[i].first << " " << users[i].second << "\n";
		}
	}
private:
	vector<pair<int, string>> users;
};

int main() {
	cin >> p >> m;

	vector<room> roomList;
	for (int i=0; i<p; i++) {
		int l;
		string n;
		bool isJoined = false;
		cin >> l >> n;

		for (int j=0; j<roomList.size(); j++) {
			if (!roomList[j].isCanJoin())
				continue;

			if (!roomList[j].isCanJoinPlayer(l))
				continue;

			roomList[j].join(l, n);
			isJoined = true;
			break;
		}

		if (!isJoined) {
			room newRoom;
			newRoom.join(l, n);
			roomList.push_back(newRoom);
		}
	}

	for (int i=0; i<roomList.size(); i++)
		roomList[i].output();
}
#include <iostream>
#include <set>

using namespace std;

int main() {
	int N;
	char game;
	cin >> N >> game;

	set<string> nameList;
	for (int i=0; i<N; i++) {
		string now;
		cin >> now;

		nameList.insert(now);
	}

	if (game == 'Y') cout << nameList.size();
	if (game == 'F') cout << nameList.size() / 2;
	if (game == 'O') cout << nameList.size() / 3;
}
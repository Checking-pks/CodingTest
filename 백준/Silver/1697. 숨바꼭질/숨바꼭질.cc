#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	queue<pair<int, int>> posAndTime;
	vector<bool> isVisit(100001);
	
    int player, target;
    cin >> player >> target;

	posAndTime.push({player, 0});
	
    while (true) {
		pair<int, int> nowPlayer = posAndTime.front();
		posAndTime.pop();

		if (nowPlayer.first == target) {
			cout << nowPlayer.second;
			break;
		}
		
		if (nowPlayer.first < 0 || nowPlayer.first > 100000 || isVisit[nowPlayer.first])
			continue;

		isVisit[nowPlayer.first] = true;

		if (nowPlayer.first < target) {
			posAndTime.push({nowPlayer.first * 2, nowPlayer.second + 1});
			posAndTime.push({nowPlayer.first + 1, nowPlayer.second + 1});
		}

		posAndTime.push({nowPlayer.first - 1, nowPlayer.second + 1});
	}
    
    return 0;
}
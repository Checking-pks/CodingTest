#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> skill;

int solve(int HP, int time, vector<int> coolingTime) {
	if (HP <= 0) 
		return time;

	int result = -1;
	for (int i=0, now, t; i<coolingTime.size(); i++) {
		if (time < coolingTime[i]) 
			continue;

		t = coolingTime[i];

		coolingTime[i] = time + skill[i][0];
		
		now = solve(HP - skill[i][1], time + 1, coolingTime);

		coolingTime[i] = t;
		
		if (result == -1)
			result = now;
		result = min(result, now);
	}

	if (result == -1)
		result = solve(HP, time + 1, coolingTime);

	return result;
}

int main() {
	int N, HP, result = -1;
	cin >> N >> HP;

	skill = vector<vector<int>>(N, vector<int>(2));
	for (int i=0; i<N; i++)
		cin >> skill[i][0] >> skill[i][1];

	cout << solve(HP, 0, vector<int>(N));
}
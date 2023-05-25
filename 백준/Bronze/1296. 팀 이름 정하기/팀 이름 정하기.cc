#include <iostream>
#include <vector>

using namespace std;

void LOVEcounting(vector<int> & list, char c) {
	switch(c) {
		case 'L':
			list[0]++;
			break;
		case 'O':
			list[1]++;
			break;
		case 'V':
			list[2]++;
			break;
		case 'E':
			list[3]++;
			break;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string name, result;
	cin >> name;

	vector<int> LOVECount(4, 0);

	for (char c:name) {
		LOVEcounting(LOVECount, c);
	}

	int num, max = -1;
	cin >> num;

	while (num--) {
		vector<int> nowCount = LOVECount;
		int nowScore = 1;
		string teamName;
		cin >> teamName;

		for (char c:teamName) {
			LOVEcounting(nowCount, c);
		}

		for (int i=0; i<4; i++) {
			for (int j=i+1; j<4; j++) {
				nowScore *= nowCount[i] + nowCount[j];
				nowScore %= 100;
			}
		}

		if (max < nowScore) {
			max = nowScore;
			result = teamName;
		} else if (max == nowScore && result > teamName) {
			result = teamName;
		}
	}

	cout << result;
}
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> heavenlyStem(10, vector<int>(10));
vector<vector<int>> chineseZodiac(12, vector<int>(12));

map<string, int> charToInt = {{"0A", 0}, {"1B", 1}, {"2C", 2}, {"3D", 3}, {"4E", 4}, {"5F", 5}, {"6G", 6}, {"7H", 7}, {"8I", 8}, {"9J", 9}, {"0K", 10}, {"1L", 11}, {"2A", 12}, {"3B", 13}, {"4C", 14}, {"5D", 15}, {"6E", 16}, {"7F", 17}, {"8G", 18}, {"9H", 19}, {"0I", 20}, {"1J", 21}, {"2K", 22}, {"3L", 23}, {"4A", 24}, {"5B", 25}, {"6C", 26}, {"7D", 27}, {"8E", 28}, {"9F", 29}, {"0G", 30}, {"1H", 31}, {"2I", 32}, {"3J", 33}, {"4K", 34}, {"5L", 35}, {"6A", 36}, {"7B", 37}, {"8C", 38}, {"9D", 39}, {"0E", 40}, {"1F", 41}, {"2G", 42}, {"3H", 43}, {"4I", 44}, {"5J", 45}, {"6K", 46}, {"7L", 47}, {"8A", 48}, {"9B", 49}, {"0C", 50}, {"1D", 51}, {"2E", 52}, {"3F", 53}, {"4G", 54}, {"5H", 55}, {"6I", 56}, {"7J", 57}, {"8K", 58}, {"9L", 59}};

int getRelationshipScore(int a, int b, int c) {
	pair<int, int> aIdx = {a % 10, a % 12}, bIdx = {b % 10, b % 12}, cIdx = {c % 10, c % 12};
	
	return heavenlyStem[aIdx.first][bIdx.first] + heavenlyStem[bIdx.first][cIdx.first] + heavenlyStem[aIdx.first][cIdx.first] + chineseZodiac[aIdx.second][bIdx.second] + chineseZodiac[bIdx.second][cIdx.second] + chineseZodiac[aIdx.second][cIdx.second];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	// input
	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++)
			cin >> heavenlyStem[i][j];

	for (int i=0; i<12; i++)
		for (int j=0; j<12; j++)
			cin >> chineseZodiac[i][j];

	vector<vector<int>> charList(60);

	for (int i=0; i<N; i++) {
		int skillValue;
		string character;

		cin >> skillValue >> character;

		int idx = charToInt[character];

		charList[idx].push_back(skillValue);
		sort(charList[idx].begin(), charList[idx].end(), greater<>());

		if (charList[idx].size() > 3) 
			charList[idx].pop_back();
	}

	// algorithm
	int result = 0;

	// 3 same
	for (int i=0; i<60; i++) {
		if (charList[i].size() < 3)
			continue;

		int relationshipScore = getRelationshipScore(i, i, i);
		int skillScore = charList[i][0] + charList[i][1] + charList[i][2];

		result = max(result, relationshipScore + skillScore);
	}

	// 2 same, 1 diff
	for (int i=0; i<60; i++) {
		if (charList[i].size() < 2)
			continue;
		
		for (int j=0; j<60; j++) {
			if (charList[j].size() < 1)
				continue;

			if (i == j) 
				continue;

			int relationshipScore = getRelationshipScore(i, i, j);
			int skillScore = charList[i][0] + charList[i][1] + charList[j][0];

			result = max(result, relationshipScore + skillScore);
		}
	}

	// all diff
	for (int i=0; i<60; i++) {
		if (charList[i].size() < 1)
			continue;
		
		for (int j = i + 1; j<60; j++) {
			if (charList[j].size() < 1)
				continue;
			
			for (int k= j + 1; k<60; k++) {
				if (charList[k].size() < 1)
					continue;

				int relationshipScore = getRelationshipScore(i, j, k);
				int skillScore = charList[i][0] + charList[j][0] + charList[k][0];

				result = max(result, relationshipScore + skillScore);
			}
		}
	}

	cout << result;
}
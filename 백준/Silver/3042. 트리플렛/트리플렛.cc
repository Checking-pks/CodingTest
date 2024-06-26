#include <iostream>
#include <vector>

using namespace std;

int CCW(int x1, int y1, int x2, int y2, int x3, int y3) {
	return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main() {
	int N, result = 0;
	cin >> N;

	vector<pair<int, int>> posList(26, {-1, -1});
	
	for (int i=0; i<N; i++) {
		string s;
		cin >> s;

		for (int j=0; j<N; j++) {
			if (s[j] == '.')
				continue;

			posList[s[j] - 'A'] = {i, j};
		}
	}
	
	for (int i=0; i<26; i++) {
		if (posList[i] == pair<int, int>{-1, -1})
			continue;
			
		for (int j=i+1; j<26; j++) {
			if (posList[j] == pair<int, int>{-1, -1})
				continue;
			
			for (int k=j+1; k<26; k++) {
				if (posList[k] == pair<int, int>{-1, -1})
					continue;
				
				int now = CCW(
					posList[i].first, posList[i].second,
					posList[j].first, posList[j].second,
					posList[k].first, posList[k].second
				);

				if (!now)
					result++;
			}
		}
	}

	cout << result;
}
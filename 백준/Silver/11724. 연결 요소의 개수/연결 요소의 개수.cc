#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int n, m, result = 0;
	cin >> n >> m;

	vector<vector<bool>> field(n + 1, vector<bool>(n + 1, false));
	vector<bool> checkList(n + 1, false);
	
	for (int i=0; i<m; i++) {
		int spotA, spotB;
		cin >> spotA >> spotB;

		field[spotA][spotB] = true;
		field[spotB][spotA] = true;
	}

	for (int i=1; i<=n; i++) {
		if (checkList[i])
			continue;

		list<int> checkBucket = {i};
		
		while (checkBucket.size()) {
			int nowCheck = checkBucket.front();
			checkBucket.pop_front();

			if (checkList[nowCheck])
				continue;

			checkList[nowCheck] = true;
			
			for (int j=1; j<=n; j++) 
				if (field[nowCheck][j])
					checkBucket.push_back(j);
		}

		result++;
	}

	cout << result;
}
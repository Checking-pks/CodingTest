#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<bool>> field(n, vector<bool>(n, false));
	vector<vector<bool>> result(n, vector<bool>(n, false));

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			bool nowRoad;
			cin >> nowRoad;

			field[i][j] = nowRoad;
		}
	}

	for (int i=0; i<n; i++) {
		list<int> bucket = {i};
		vector<bool> alreadyCheck(n, false);
		
		while (bucket.size()) {
			int nowCheck = bucket.front();
			bucket.pop_front();
			
			if (alreadyCheck[nowCheck])
				continue;

			alreadyCheck[nowCheck] = true;

			for (int j=0; j<n; j++) {
				if (field[nowCheck][j]) {
					result[i][j] = true;
					bucket.push_back(j);
				}
			}
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) 
			cout << result[i][j] << " ";
		cout << "\n";
	}
}
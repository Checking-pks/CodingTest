#include <iostream>
#include <vector>
#include <list>

using namespace std;

void checkAndChange(vector<vector<vector<int>>> & box, vector<vector<vector<bool>>> & alreadyCheck, list<vector<int>> & bucket, int & numOfRipeTomato, int x, int y, int z, int days) {
	if (alreadyCheck[x][y][z] || numOfRipeTomato == 0)
		return;
	
	alreadyCheck[x][y][z] = true;
	
	if (box[x][y][z] == 0) {
		box[x][y][z] = 1;
		bucket.push_back({x, y, z, days + 1});
		numOfRipeTomato--;
	}
}

bool isAllRipe(vector<vector<vector<int>>> box) {
	for (int i=1; i<box.size()-1; i++) 
		for (int j=1; j<box[i].size()-1; j++) 
			for (int k=1; k<box[i][j].size()-1; k++) 
				if (box[i][j][k] == 0)
					return false;

	return true;
}

int main() {
	int x, y, z;
	cin >> z >> y >> x;
	
	vector<vector<vector<int>>> box(x + 2, vector<vector<int>>(y + 2, vector<int>(z + 2, -1)));
	vector<vector<vector<bool>>> alreadyCheck(x + 2, vector<vector<bool>>(y + 2, vector<bool>(z + 2, false)));
	list<vector<int>> bucket;
	int numOfRipeTomato = 0, result = 0;
	
	for (int i=1; i<=x; i++) {
		for (int j=1; j<=y; j++) {
			for (int k=1; k<=z; k++) {
				int num;
				cin >> num;

				box[i][j][k] = num;

				switch (box[i][j][k]) {
					case 1:
						bucket.push_back({i, j, k, 0});
					case -1:
						alreadyCheck[i][j][k] = true;
						break;
					case 0:
						numOfRipeTomato++;
						break;
				}
			}
		}
	}
	
	while (bucket.size()) {
		vector<int> nowTomato = bucket.front();
		bucket.pop_front();
		
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0] + 1, nowTomato[1], nowTomato[2], nowTomato[3]);
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0] - 1, nowTomato[1], nowTomato[2], nowTomato[3]);
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0], nowTomato[1] + 1, nowTomato[2], nowTomato[3]);
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0], nowTomato[1] - 1, nowTomato[2], nowTomato[3]);
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0], nowTomato[1], nowTomato[2] + 1, nowTomato[3]);
		checkAndChange(box, alreadyCheck, bucket, numOfRipeTomato, nowTomato[0], nowTomato[1], nowTomato[2] - 1, nowTomato[3]);

		if (bucket.empty())
			result = nowTomato[3];
	}

	cout << (isAllRipe(box) ? result : -1);
}
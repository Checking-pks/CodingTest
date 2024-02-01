#include <iostream>
#include <vector>

using namespace std;

class spot {
public:
	int x, y, price=0;
};

int main() {
	vector<pair<int, int>> move = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {0, 0}};
	
	int N, result = 3003;
	cin >> N;

	vector<vector<int>> field(N, vector<int>(N));
	for (int i=0; i<N; i++) 
		for (int j=0; j<N; j++)
			cin >> field[i][j];

	vector<spot> spotList;
	for (int i=1; i<N-1; i++) {
		for (int j=1; j<N-1; j++) {
			spot now;
			now.x = i; 
			now.y = j;

			for (int k=0; k<move.size(); k++) 
				now.price += field[i+move[k].first][j+move[k].second];

			spotList.push_back(now);
		}
	}

	for (int i=0; i<spotList.size()-2; i++) {
		spot one = spotList[i];
		for (int j=i+1; j<spotList.size()-1; j++) {
			spot two = spotList[j];
			if (abs(one.x-two.x)+abs(one.y-two.y) < 3) continue;
	
			for (int k=j+1; k<spotList.size(); k++) {
				spot three = spotList[k];
				if (abs(one.x-three.x)+abs(one.y-three.y) < 3) continue;
				if (abs(two.x-three.x)+abs(two.y-three.y) < 3) continue;

				result = min(result, one.price + two.price + three.price);
			}
		}
	}

	cout << result;
}
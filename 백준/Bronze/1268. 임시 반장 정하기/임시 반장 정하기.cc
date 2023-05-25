#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num, max = 0, result = 1;
	cin >> num;

	vector<vector<int>> numList(num, vector<int> (5, 0));
	vector<int> friendList(num, 0);

	for (int i=0; i<num; i++)
		for (int j=0; j<5; j++)
			cin >> numList[i][j];

	for (int i=0; i<num; i++) {
		for (int j=i+1; j<num; j++) {
			for (int k=0; k<5; k++) {
				if (numList[i][k] == numList[j][k]) {
					friendList[i]++;
					friendList[j]++;
					break;
				}
			}
		}

		if (max < friendList[i]) {
			max = friendList[i];
			result = i + 1;
		}
	}

	cout << result;
}